
#include <stdio.h>
#include <stdlib.h>

int suma (int par1, int par2){
    int suma = 0;
    suma = par1 + par2;

    return suma;
};

int main (int argc, char *argv[]){

    printf(" %i\n", suma(2, 3));

	return EXIT_SUCCESS;
}
