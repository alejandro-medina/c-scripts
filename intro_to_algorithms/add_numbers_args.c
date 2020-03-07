#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Declare functions
int add_two_nums(int numA, int numB);

void main(int argc, char** argv) {
	// Convert arguments to numeric value
	int numA = atoi(argv[1]);
	int numB = atoi(argv[2]);


	// call the function
	// int result = add_two_nums(numA, numB);

	int result  = numA + numB;

	printf("The sum of %d + %d is %d\n", numA, numB, result);
	
}

// Define the function
// int add_two_nums(int numA, int numB) {

// 	return numA + numB;

// }
