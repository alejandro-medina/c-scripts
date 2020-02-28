#include <stdio.h>

void inc_count(int *count_ptr) {
	
	printf("Incrementing count, current value: %d\n", *count_ptr);
	(*count_ptr)++;

}

int main() {

	int count = 0; 
	while(count < 10) {
		inc_count(&count);
	}

	return 0;

}

