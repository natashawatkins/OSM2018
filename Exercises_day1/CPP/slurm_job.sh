#!/bin/bash -l

#SBATCH --ntasks=1
#SBATCH --time=01:00:00
#SBATCH --output=helloname.out
#SBATCH --error=slurm_test.err

### executable
./hidiho.exec
