#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Hacer un programa que lea una letra, la almacene en una variable, la convierta a mayúscula y por último, que la muestre por pantalla.

int main (int argc, char *argv[]){

	char lower, upper;

	lower = getchar(); //getchar lee del teclado
	upper = toupper(lower); // toupper convierte la letra minúscula en mayúscula
	putchar(upper); // putchar muestra el caracter leido del teclado por la pantalla

	printf("\n");

	return EXIT_SUCCESS;
}
