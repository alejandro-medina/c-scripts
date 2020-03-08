#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	
	// if the args is not even then show error

	if((argc-1) % 2 != 0){
		printf("Not possible to perform the operation. Enter pairs of vector with exactly same elements\n");
		return 0;
	}	

	float result = 0;

	// iterate over the args received
	
	int i;
	for(i = 1; i<=argc/2; i++) {

		float x1 = atof(argv[i]);
		float x2 = atof(argv[(argc/2) + i]);
		// print to see the products of each element
		// printf("%.2f * %.2f = %.2f\n", x1, x2, x1*x2);
		result = result + (x1*x2);

	}

	
	printf("\nThe result of producto punto is  = : %.2f\n\n", result);

	return 0;
	
}
