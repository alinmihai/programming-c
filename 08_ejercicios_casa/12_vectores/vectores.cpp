
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    // En la variable n se guardan las dimensiones de los vectores.

    int n,
        i,
        vector1,
        vector2,
        resultado = 0;

    printf("Diga las dimensiones de los vectores: ");
    scanf(" %i", &n);

    for (i = 0; i < n; i++){

        printf("\nDiga el primer vector: ");
        scanf(" %i", &vector1);
        printf("\nDiga el segundo vector: ");
        scanf(" %i", &vector2);

        resultado += vector1 * vector2;
    }

    printf("\nEl producto escalar es: %i\n\n", resultado);
	return EXIT_SUCCESS;
}
