#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int args, char** argsv) {

	int limit = atoi(argsv[1]); // first argument will be the limit
	int a = atoi(argsv[2]); // print fizz
	int b = atoi(argsv[3]); // print buzz

	for(int i = 1; i <= limit; i++) {
		if(i % a == 0 && i % b == 0) {
			printf("FizzBuzz\n");
		} else if (i % a == 0) {
			printf("Fizz\n");
		} else if (i % b == 0) {
			printf("Buzz\n");
		} else {
			printf("%d\n", i);
		}
	}


}
