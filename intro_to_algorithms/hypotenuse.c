#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

float calculate_hypotenuse(float legA, float legB);

int main(int argc, char** argv) {

	float legA = atoi(argv[1]);
	float legB = atoi(argv[2]);

	float result = calculate_hypotenuse(legA, legB);
	printf("The hypotenuse is %.2f\n", result);

	return 0;
}

float calculate_hypotenuse(float legA, float legB) {

	return sqrt(pow(legA, 2) + pow(legB, 2));

}
