#include <stdio.h>

void swap_numbers(int *a, int *b) {

	int temp_a = *a;
	*a = *b;
	*b = temp_a;

}

int main() {

	int a = 4, b = 5;
	printf("a = %d && b = %d\n", a, b);

	swap_numbers(&a, &b);

	printf("a = %d && b = %d\n", a, b);
	return 0;

}

