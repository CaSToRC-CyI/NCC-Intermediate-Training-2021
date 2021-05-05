#include <mpi.h>
#include <omp.h>
#include <stdio.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
  /*
   * Get the hostname of the node we are running on
   */
  char hname[256];
  gethostname(hname, 256);

  int provided;
  MPI_Init_thread(&argc, &argv, MPI_THREAD_SINGLE, &provided);
  
  int nproc, rank;
  MPI_Comm_size(MPI_COMM_WORLD, &nproc);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  /*
   * All processes: print `rank', `nproc', `hname', and their OpenMP thread id
   */
#pragma omp parallel
  {
    int nthr = omp_get_num_threads();
    int ithr = omp_get_thread_num();
    printf(" This is thread = %2d of nthread = %2d, rank = %2d of nproc = %2d, node: %s\n", ithr, nthr, rank, nproc, hname);
  }
  MPI_Finalize();
  return 0;
}
