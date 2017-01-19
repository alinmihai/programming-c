
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int numero;

    printf("\nIntroduzca un número: ");
    scanf(" %i", &numero);

    for(int divisor = 2; divisor < numero; divisor++){

        if(numero % divisor == 0){

            printf("\nSu número tiene divisores\n");

            return EXIT_SUCCESS;

        }

    }

    printf("\nSu número no tiene divisores\n");

   	return EXIT_SUCCESS;

}
