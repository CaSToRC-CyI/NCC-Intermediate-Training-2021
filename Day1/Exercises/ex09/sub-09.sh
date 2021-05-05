#!/bin/bash
#SBATCH --job-name=09
#SBATCH --nodes=2
#SBATCH --ntasks=80
#SBATCH --output=ex09-output.txt
#SBATCH --time=00:01:00
#SBATCH --reservation=edu12

module load gompi
export OMP_NUM_THREADS=20
mpirun -N 2 -npernode 4 ./ex09
