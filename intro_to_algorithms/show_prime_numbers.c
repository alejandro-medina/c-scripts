#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){

	if((argc-1) < 2 || (argc-1)>2) {
		printf("Insert two numeric arguments\n");
		return 0;
	}

	int start = atoi(argv[1]);
	int end = atoi(argv[2]);

    if (start > end) {
        printf("Second argument should be greater than the first one\n");
    }
	
    int i;
    int is_prime;
    int total_primes = 0;
    
    for (i = start; i <= end; i++) {

        int j;
        // antes de dividir, suponemos que si es un primo
        is_prime = 1;
        for (j = 1; j <= i; j++) {

            // Descartar primero si el usuario ingresó 1, ya que el 1 no es primo pero el programa diría que SI es
            
            if (i == 1) {

                is_prime = 0;

            } else if (i % j == 0) { // si el numero es divisible exactamente por j

                // Comprobar que j no sea otro numero diferente a 1 o el mismo número, 
                // de lo contrario no es primo

                if(j != 1 && j != i) {
                    is_prime = 0; // aquí el numero deja de ser primo
                    j = i + 1; // cerrar el ciclo for (minimiza tiempo de carga por descarte)
                }

            }
       
        }
        
        // Comprobar si se mantuvo mi condicion
        if(is_prime == 1) {
            printf("%d is a prime number\n", i);
            total_primes++;
        } 

    }

    printf("\nTotal primes between %d and %d is %d\n", start, end, total_primes);

	return 0;
}
