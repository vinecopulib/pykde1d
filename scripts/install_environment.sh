#!/bin/bash
mamba env create -f scripts/environment.yml

# Ensure the environment is created before moving forward
if [ $? -eq 0 ]; then
    # Ensure conda is initialized for this shell
    eval "$(conda shell.bash hook)"

    # Activate the newly created environment
    conda activate pykde1d311

    if [ $? -eq 0 ]; then
      # Copy the post-activation script to the appropriate directory
      mkdir -p $CONDA_PREFIX/etc/conda/activate.d
      cp scripts/env_vars.sh $CONDA_PREFIX/etc/conda/activate.d/env_vars.sh
      chmod +x $CONDA_PREFIX/etc/conda/activate.d/env_vars.sh
    else
      echo "Conda environment activation failed."
      exit 1
    fi
else
    echo "Conda environment creation failed."
    exit 1
fi

# Run the Python script to update c_cpp_properties.json
python scripts/update_c_cpp_properties.py