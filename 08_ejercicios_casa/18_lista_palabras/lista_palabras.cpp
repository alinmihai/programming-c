
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    const char *lista[] = {
        "Patata",
        "Zanahoria",
        "Pimiento",
        "Tomate",
        "Pepino",
        NULL
    };

    for (int n=0; lista[n]!=NULL; n++)

    printf("\n%i.- %s", n+1, lista[n]);

    printf("\n\n");

	return EXIT_SUCCESS;
}
