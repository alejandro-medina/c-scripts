#include <stdio.h>
#include <stdlib.h>

void main(void) {

	int x = 20; // declare a int var
	printf("Address of x: %p\n", (void *)&x);  // show address or x

	int *px, not_a_pointer; //declare a pointer and a int var
	px = &x; // my pointer will point to x var
	printf("Address of px: %p\n", (void *)px); // show address of px

	//show size of both vars
	// even both vars are int type, px stores a string so the size is 8b
	printf("Size of px: %zu, size of not_a_pointer: %zu\n", sizeof(px),
		sizeof(not_a_pointer));

	printf("Value of px: %d\n", *px); // show the value of a pointer

	//modify the pointer
	(*px)++;
	printf("value of pointer: %d\n", *px);
	printf("value of x: %d\n", x);

}
