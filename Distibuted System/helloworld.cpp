#include <mpi.h>
#include <iostream.h>

int main( int argc, char **argv){
	int rank;
	int size;
	
	MPI_Init( &argc, &argv);
	MPI_Comm_size( MPI_COMM_WORLD, &size );
	MPI_Comm_rank( MPI_COMM_WORLD, &rank );
	
	cout << " Hello, I'm process " << rank << " of " << size << endl;
	MPI_Finalize( );
	return 0;
}