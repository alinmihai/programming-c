#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 50

// Hacer un programa que lea una cadena de caracteres, la convierta a mayúscula y la muestre por pantalla 

int main (int argc, char *argv[]){

	char frase[MAX];
	int contador = 0, tag;

	while ((frase[contador] = getchar()) != '\n')
		++contador;
	tag = contador;

	contador = 0;

	while (contador < tag) {
		putchar(toupper(frase[contador]));
	++contador;
	}

	printf("\n");

	return EXIT_SUCCESS;
}
