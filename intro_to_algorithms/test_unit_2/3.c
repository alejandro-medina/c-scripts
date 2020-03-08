#include <stdlib.h>
#include <stdio.h>
#include <math.h> // compile using gcc -lm

float hypotenuse(float x, float y) {
	

	return sqrt(pow(x, 2) + pow(y, 2));

}

int main(int argc, char** argv) {

	float radius, x, y;

	// check if the user enters 3 arguments
	if((argc-1) < 3 || (argc-1) > 3){
		printf("Enter 3 numeric arguments: radius, x, y\n");
		return 0;
	} else {

		radius = atof(argv[1]);

		if(radius <= 0) {
			printf("Radius needs to be grater than zero.\n");
		}

		x = abs(atof(argv[2]));
		y = abs(atof(argv[3]));
	}

	// point distance from 0,0
	float distance = hypotenuse(x, y);
	printf("The distance from 0,0 is = %.2f\n", distance);
	printf("Radius of the circle     = %.2f\n", radius);
	if(distance > radius){
		printf("The point (%.2f, %.2f) is outside the cirle\n", x, y);
	} else if(distance == radius){
		printf("The point (%.2f, %.2f) is in the border of the circle\n", x, y);
	} else {
		printf("The point (%.2f, %.2f) is inside the circle\n", x, y);
	}
	return 0;
}
