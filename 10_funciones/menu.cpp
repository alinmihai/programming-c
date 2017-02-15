
#include <stdio.h>
#include <stdlib.h>

char menu (){
        "1.- Has elegido la opción 1.",
        "2.- Has elegido la opción 2.",
        "3.- Has elegido la opción 3.",
        NULL
;}

int main (int argc, char *argv[]){

    char opcion = menu();

    printf("%i", opcion);

	return EXIT_SUCCESS;
}
