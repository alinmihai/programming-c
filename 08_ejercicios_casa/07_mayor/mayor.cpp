
#include <stdio.h>
#include <stdlib.h>

int main (){

    int introducido;
    int comparador=0;

    for (int orden = 0; orden < 10; orden++){

        printf("\nNúmero %i: ", orden + 1);
        scanf(" %i", &introducido);

        if (introducido > comparador)

            comparador = introducido;

    }

    printf("\nEl número más grande es %i\n", comparador);

	return EXIT_SUCCESS;
}
