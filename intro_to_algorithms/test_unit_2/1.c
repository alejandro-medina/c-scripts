#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

	float sum = 0, max = 0, min = 0, ave = 0;
	int amount_numbers = 0;
	
	// iterate over the args received
	
	int i;
	for(i = 1; i<argc; i++) {
		
		float num = atof(argv[i]);
		amount_numbers++;
		 // 1. add to the sum
		sum = sum + num;
		
		// check if min or max
		if(i == 1) {
			min = num;
			max = num;
		} else {
			if(num > max) {
				max = num;
			}

			if(num < min) {
				min = num;
			}
		}

	}

	ave = sum/amount_numbers;
	
	printf("The average of all numbers is: %.2f\n", ave);
	printf("The maximun number entered is: %.2f\n", max);
	printf("The minimun number entered is: %.2f\n", min);

	return 0;
	
}
