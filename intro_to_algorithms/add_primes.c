#include <stdio.h>
#include <stdlib.h>

void main() {
    int numero;
    int sprimos = 0;
    int i;
    int is_prime;
    
    for(i = 1; i <= 30; i++) {
        
        
        printf("Ingresa un número: ", i);
        scanf("%d", &numero);

        
        int j;
        // antes de dividir, suponemos que si es un primo
        is_prime = 1;
        for (j = 1; j <= numero; j++) {

            // Descartar primero si el usuario ingresó 1, ya que el 1 no es primo pero el programa diría que SI es
            
            if (numero == 1) {

                is_prime = 0;

            } else if (numero % j == 0) { // si el numero es divisible exactamente por j

                // Comprobar que j no sea otro numero diferente a 1 o numero, 
                // de lo contrario no es primo

                if(j != 1 && j != numero) {
                    is_prime = 0; // aquí el numero deja de ser primo
                    j = numero + 1; // cerrar el ciclo for (minimiza tiempo de carga por descarte)
                }

            }
       
        }
        
        // Comprobar si se mantuvo mi condicion
        if(is_prime == 1) {
            sprimos = sprimos + numero;
        }        
            
    }
    
    printf("La suma de los primos es: %i\n", sprimos);
}