#include <stdio.h>
#include <stdlib.h>

int main (){

    int amarillo, rojo, azul;

    printf ("\nDiga si está viendo el color amarillo (Si=1 / No=0): ");
    scanf ("\n %i", &amarillo);
    printf ("\nDiga si está viendo el color rojo (Si=1 / No=0): ");
    scanf ("\n %i", &rojo);
    printf ("\nDiga si está viendo el color azul (Si=1 / No=0): ");
    scanf ("\n %i", &azul);

    if (amarillo == 0 && rojo == 0 && azul == 0)
    printf ("\n\tUsted está viendo el color negro\n");

    if (amarillo == 0 && rojo == 0 && azul == 1)
    printf ("\n\tUsted está viendo el color azul\n");

    if (amarillo == 0 && rojo == 1 && azul == 1)
    printf ("\n\tUsted está viendo el color morado\n");

    if (amarillo == 0 && rojo == 1 && azul == 0)
    printf ("\n\tUsted está viendo el color rojo\n");

    if (amarillo == 1 && rojo == 0 && azul == 0)
    printf ("\n\tUsted está viendo el color amarillo\n");

    if (amarillo == 1 && rojo == 0 && azul == 1)
    printf ("\n\tUsted está viendo el color verde\n");

    if (amarillo == 1 && rojo == 1 && azul == 0)
    printf ("\n\tUsted está viendo el color naranja\n");

    if (amarillo == 1 && rojo == 1 && azul == 1)
    printf ("\n\tUsted está viendo el color blanco\n\n");

    return EXIT_SUCCESS;
}
