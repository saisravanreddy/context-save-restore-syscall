#include "header.h"

int main(int argc, char *argv[])
{
	int perf_fork, perf_context;

	init_params(argc, argv);
	perf_fork = run_fork();
	printf("Baseline(fork) Throughput:%15d\n", perf_fork);
	perf_context = run_context();
	printf("Optimized(context) Throughput:%12d\n", perf_context);
	printf("Speedup:%33.2f\n", (double) perf_context / perf_fork);
        return 0;
}
