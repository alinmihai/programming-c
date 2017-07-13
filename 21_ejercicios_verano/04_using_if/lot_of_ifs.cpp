#include <stdio.h>
#include <stdlib.h>

// Hacer un programa básico en el que, dado un número del 1 al 10, ha de decir si es pequeño, mediano o grande.
// Siendo hasta el 4 (incluido) pequeños, el 5 mediano y del 6 (incluido) en adelante, grandes

int main (int argc, char *argv[]){

	int numero;

	printf("Introduce un número del 1 al 10\n");
	scanf(" %i", &numero);

	if(numero <5)
		printf("El número es pequeño\n");
	else if(numero == 5)
		printf("El número es mediano\n");
	else
		printf("El número es grande\n");

	return EXIT_SUCCESS;
}
