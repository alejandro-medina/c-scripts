#include <stdio.h>
int main() {

	int thing_var; // define a variable for thing
	int *thing_ptr; // define a pointer for thig

	thing_var = 2; // assigning a value to a thing
	printf("Thing %d\n", thing_var);

	thing_ptr = &thing_var; //make the poiniter point to a thing
	*thing_ptr = 3; // thing_ptr point to a thing_var so thing_var will change to 3

	
	printf("Thing %d\n", thing_var);

	/*Another way to do the printf*/
	
	printf("Thing %d\n", *thing_ptr);
	return 0;

}
