#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    char nombre[] = "Me llamo Jose Manuel";
    char *p_inicial = nombre;
    char *p_final = nombre;
    char aux;

    while(*p_final != '\0')
        p_final++;
    p_final--;

    for(; p_final > p_inicial; p_final--, p_inicial++){
        aux = *p_final;
        *p_final = *p_inicial;
        *p_inicial = aux;
    }

        printf("%s\n", nombre);

	return EXIT_SUCCESS;
}
