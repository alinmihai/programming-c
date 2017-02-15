#include <stdio.h>
#include <stdlib.h>

bool es_par(int n){

    if (n%2>0)
    return false;
    else
    return true;
    }

int main (int argc, char *argv[]){

    int numero;

    printf("Número: ");
    scanf(" %i", &numero);
    printf("Tu número %ses par\n",
            es_par(numero)? "": "no " );  //?: devuelve, si es verdadero, la primera condición y si es                                                falso, la segunda.

	return EXIT_SUCCESS;
}
