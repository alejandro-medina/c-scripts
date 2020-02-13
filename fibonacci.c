#include <stdio.h>

int main(void) {

	int posicion = 10, x = 0, y = 1, z = 1;


	printf("Vamos a encontrar la posicion %d en la serie de fibonacci. \n", posicion);


	for(int i = 1; i <= posicion; i++) {
	

		if (i == 1 || i == 2) {

			if (i == 1) {
				z = x;
			} else {
				z = y;
			}
			
		} else {
			z = x + y;
			x = y;
			y = z;
		}
		
		printf("En la posicion %d, el número es: %d \n", i, z);
		
	}
	
	printf("\n\nEl resultado es: %d \n", z);
	
	
}
