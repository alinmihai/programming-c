
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int numero, media;
    int suma = 0;

    for (int orden = 0; orden < 10; orden ++){

        printf("\nNúmero %i: ", orden + 1);
        scanf(" %i", &numero);

        suma += numero;
    }

    media = suma / 10;

    printf("\nLa media es: %i\n", media);

	return EXIT_SUCCESS;
}
