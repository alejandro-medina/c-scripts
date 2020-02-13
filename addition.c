#include <math.h>
#include <stdio.h>

int main (void) {

int items = 10, total = 0, i = 1;

for(i = 1; i <= items; i++) {
	
	
	total = total + pow(i, 2);
	printf("adding %f \n", pow(i, 2));

}

printf("the total is %d \n", total);

return 0;

}
