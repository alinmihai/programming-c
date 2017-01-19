
#include <stdio.h>
#include <stdlib.h>

int main (){

    int num1, num2, almacen;

    printf("\nIntroduzca el primer número: ");
    scanf(" %i", &num1);

    printf("\nIntroduzca el segundo número: ");
    scanf(" %i", &num2);

    almacen = num1;
    num1 = num2;
    num2 = almacen;

    printf("\nEl primer número ahora es: %i\n", num1);
    printf("\nEl segundo número ahora es: %i\n", num2);

	return EXIT_SUCCESS;
}
