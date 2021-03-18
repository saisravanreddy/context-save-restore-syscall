#include "header.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main(int argc, char *argv[])
{

	//checking how many bytes in virtual address space are occupied by the array.
	/*	
	int num_elements = (1UL << 25);
        int *buff;

        buff = malloc(sizeof(int) * num_elements);
        printf("\nPid of the process is = %d \n", getpid());
	printf("%p  %p\n",&buff[0],&buff[num_elements-1]);
	
	while(1);
	return 0;
	*/
	

	int perf_fork;

	init_params(argc, argv);
	perf_fork = run_fork();
	printf("Fork per second:\t%d\n", perf_fork);
        
	return 0;
}
