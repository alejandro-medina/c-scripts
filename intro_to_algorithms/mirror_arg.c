#include <stdlib.h>
#include <stdio.h>
#include <string.h> 


int mirror_number(char num[12]){

    char mirror[12];
    int length = strlen(&num);
    printf("%s\n", length);

    return 0;

}

void main(int cantidad, char** argv) {

    int num_original = atoi(argv[1]);
    char num_s[12];
    sprintf(num_s, "%d", num_original);

    int result = mirror_number(num_s);
}