import json
import os
import subprocess


def get_clang_version_path():
  conda_prefix = os.getenv("CONDA_PREFIX")
  clang_path = os.path.join(conda_prefix, "bin", "clang")
  try:
    version_output = subprocess.check_output([clang_path, "--version"]).decode()
    version = version_output.split("version ")[1].split()[0]
    print(f"Found clang version: {version}")
    return os.path.join(
      conda_prefix, "lib", "clang", version.split(".")[0], "include"
    )
  except Exception as e:
    print(f"Error finding clang version: {e}")
    return None


def get_python_version():
  try:
    version_output = subprocess.check_output(["python", "--version"]).decode()
    version = version_output.split("Python ")[1].strip()
    print(f"Found Python version: {version}")
    return version
  except Exception as e:
    print(f"Error finding Python version: {e}")
    return None


def update_c_cpp_properties():
  conda_prefix = os.getenv("CONDA_PREFIX")
  if not conda_prefix:
    print("Conda environment is not activated.")
    return

  clang_include_path = get_clang_version_path()
  if not clang_include_path:
    print("Clang include path not found.")
    return

  python_version = get_python_version()
  if not python_version:
    print("Python version not found.")
    return

  c_cpp_properties = {
    "configurations": [
      {
        "name": "Linux",
        "includePath": [
          "${workspaceFolder}/**",
          f"{conda_prefix}/include",
          f"{conda_prefix}/include/eigen3",
          clang_include_path,
          f"{conda_prefix}/include/python{python_version.split('.')[0]}.{python_version.split('.')[1]}",
          f"{conda_prefix}/include/c++/v1",
        ],
        "defines": [],
        "compilerPath": f"{conda_prefix}/bin/clang",
        "cStandard": "c17",
        "cppStandard": "c++14",
        "intelliSenseMode": "linux-clang-x64",
      }
    ],
    "version": 4,
  }

  with open(".vscode/c_cpp_properties.json", "w") as f:
    json.dump(c_cpp_properties, f, indent=2)


if __name__ == "__main__":
  update_c_cpp_properties()