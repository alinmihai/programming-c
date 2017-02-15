#include <stdio.h>
#include <stdlib.h>

void leer (double *base, double *exponente){

    printf("Introduzca base: ");
    scanf(" %lf", base);

    printf("Introduzca exponente: ");
    scanf(" %lf", exponente);
}

int main (int argc, char *argv[]){

    double base, exponente;

    leer(&base, &exponente);

    printf("%.2lf, %.2lf", base, exponente);

    printf("\n\n");

	return EXIT_SUCCESS;
}
