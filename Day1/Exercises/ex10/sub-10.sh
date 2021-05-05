#!/bin/bash
#SBATCH --job-name=10
#SBATCH --nodes=2
#SBATCH --ntasks=16
#SBATCH --output=ex10-output.txt
#SBATCH --time=00:01:00
#SBATCH --reservation=edu12

module load gompi
export OMP_NUM_THREADS=2
mpirun -N 2 -npernode 4 ./ex10
