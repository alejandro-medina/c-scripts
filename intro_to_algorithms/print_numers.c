#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {

	int start = atoi(argv[1]);
	int end = atoi(argv[2]);

	for (int i = start; i <= end; i++) {
		printf("%d \n", i);
	}

}
