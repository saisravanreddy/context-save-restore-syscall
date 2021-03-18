#include "header.h"

int main(int argc, char *argv[])
{
	int perf_context;

	init_params(argc, argv);
	perf_context = run_context();
	printf("Context per second:\t%d\n", perf_context);
	return 0;
}
