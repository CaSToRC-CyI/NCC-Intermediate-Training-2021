#!/bin/bash
#SBATCH --job-name=06
#SBATCH --nodes=2
#SBATCH --ntasks=40
#SBATCH --output=ex06-output.txt
#SBATCH --time=00:01:00

module load gompi
mpirun ./ex06
