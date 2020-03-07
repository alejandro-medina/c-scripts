#include <stdlib.h>
#include <stdio.h>

void main(int argc, char** argv){

	int limit = atoi(argv[1]);
	int i;
	for(i = 1; i <= limit; i++) {
		printf("Counter is on %d\n", i);
	}
}
