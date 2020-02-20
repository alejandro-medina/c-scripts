#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char** argv) { //argument count & argument vector
	
	printf("\nYou entered %d arguments\n\n", argc);

	int i;
	int num = atoi(argv[1]); // convert the argument from string to numeric format, only if the string a number format
	for (i = 0; i < argc; i++) {
		printf("argv[%d] is %s \n", i, argv[i]);
	}

	printf("%d\n", num); // print the first argument as a numeric format

	return 0;

}
