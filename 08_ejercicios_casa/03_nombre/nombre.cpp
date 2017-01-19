
#include <stdio.h>
#include <stdlib.h>

int main (){

    char nombre[] = "ABCDEFGHIJKLMNÑOPEQRSTUVWXYZ";

    printf("Escriba su nombre: ");
    scanf(" %s", &nombre);

    printf("\nSu nombre es %s\n", nombre);

	return EXIT_SUCCESS;
}
