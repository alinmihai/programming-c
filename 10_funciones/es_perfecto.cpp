#include <stdio.h>
#include <stdlib.h>

bool es_perfecto(int pos_perf){

    int pos_div = 1;

    for (int cont = 2; cont < pos_perf; cont ++)
        if (pos_perf % cont == 0)
            pos_div += cont;
        if (pos_div == pos_perf)
        return true;
        return false;
}

int main (int argc, char *argv[]){

    int numero;

    printf("Introduzca un número: ");
    scanf(" %i", &numero);
    printf(" %i %sperfecto.\n", numero,
            es_perfecto(numero)? "es " : "no es " );

	return EXIT_SUCCESS;
}
