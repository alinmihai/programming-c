#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int naturales [10];

    for (int i=0; i<10; i++){

        naturales[i] = i+1;

        printf("\n%i", naturales[i] * naturales[i]);
    }

    printf("\n\n");


	return EXIT_SUCCESS;
}
