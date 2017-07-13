#include <stdio.h>
#include <stdlib.h>

#define MAX 50

// Hacer un programa que lea una cadena de caracteres (hasta que se encuentre un newline) 
// y la almacene en un array de máximo 50 caracteres y la muestre por pantalla

int main (int argc, char *argv[]){

	char line[MAX];

	scanf(" %[^\n]", line);

	printf("%s\n", line);
	
	return EXIT_SUCCESS;
}
