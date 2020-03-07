#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){

	if((argc-1) < 3 || (argc-1)>3) {
		printf("Inserte 3 argumentos numéricos\n");
		return 0;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);

	if(a > b && a > c) {
		if(b > c) {
			printf("%d > %d > %d\n", a, b, c);
		} else {
			printf("%d > %d > %d\n", a, c, b);
		}
	} else if (b > a && b > c) {
		if (a > c) {
			printf("%d > %d > %d\n", b, a, c);
		} else {
			printf("%d > %d > %d\n", b, c, a);
		}
	} else { // aqui podemos suponer que c es mas grande
		if (b > a) {
			printf("%d > %d > %d\n", c, b, a);
		} else {
			printf("%d > %d > %d\n", c, a, b);
		}
	}

	return 0;
}
