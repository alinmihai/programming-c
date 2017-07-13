#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Hacer un programa que lea una cadena de caracteres (hasta que se encuentre con un newline), 
//la almacene en un array, la convierta a mayúscula y por último, que la muestre por pantalla

int main (int argc, char *argv[]){

	char letter[40];
	int tag, i;

	system("clear");

	for (i=0; (letter[i] = getchar()) != '\n'; ++i);

	tag = i;

	for (i=0; i<tag; ++i)
		putchar(toupper(letter[i]));

	printf("\n");

	return EXIT_SUCCESS;
}
