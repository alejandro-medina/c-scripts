#include <stdlib.h>
#include <stdio.h>

void main(){

    for (int i = 1500; i <= 2100; i++) {
	
        if(i%4 == 0 && i%100 != 0) {
		
            printf("%d is a leap year\n", i);
        } else {
            printf("%d\n", i);
        }

    }

}
