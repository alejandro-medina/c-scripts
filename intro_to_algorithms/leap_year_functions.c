#include <stdlib.h>
#include <stdio.h>

int is_leap_year(int year);

void main(int argc, char** argv){

    int init = atoi(argv[1]);
    int end = atoi(argv[2]);

    for (int i = init; i <= end; i++) {
        
        int r = is_leap_year(i);

        if(r == 1) {
            printf("%d is leap\n", i);
        } else {
            printf("%d\n", i);
        }

    }

}

// return 1 if leap, or 0 if not
int is_leap_year(int year) {

    if(year%4 == 0 && year%100 != 0) {
            return 1;
        } else {
            return 0;
        }

}