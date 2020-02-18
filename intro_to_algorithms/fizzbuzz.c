#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {

	printf("\n");

	for (int i = 1; i <= 200; i++) {

		if(i%5 == 0 && i%3 == 0){
			printf("FizzBuzz\n");
		} else if (i % 3 == 0) {
			printf("Fizz\n");
		} else if (i%5 == 0) {
			printf("Buzz\n");
		} else {
			printf("%d\n", i);
		}
	}


}
