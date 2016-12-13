#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *tubo; //stream

    tubo = fopen("prueba.txt", "w");

    printf("hola\n");

    fprintf(stdout, "hola\n");
    fprintf(tubo, "hola\n");

    fclose(tubo); //siempre hay que cerrar el tubo

	return EXIT_SUCCESS;
}
