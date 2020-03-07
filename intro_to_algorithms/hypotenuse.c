#include <stdlib.h>
#include <stdio.h>
#include <math.h> // use sqrt(), pow()

void main(void) {

    // Declare two legs
    float legA = 4.5;
    float legB = 5.4;


    // hyp = root of squared A + squared B
    float hypotenuse = sqrt(pow(legA, 2) + pow(legB, 2));

    printf("Leg A = %.2f\nLeg B = %.2f\nHypotenuse = %.2f\n", legA, legB, hypotenuse);



}