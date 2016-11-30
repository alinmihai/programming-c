
#include <stdio.h>
#include <stdlib.h>

// El programa se basa en averiguar la letra de un DNI, dando el usuario solo los números del mismo.
// La variable char contiene todas las letras que puede tener un DNI y cada una corresponde a un número.
// Introducimos las variables DNI y resto, donde se guardarán: el número que el usuario introduzca y el resto de dividir el número del DNI introducido entre 23.
// Primero preguntamos al usuario el número que quiera introducir y haremos que el programa coja un número entero tras eliminar los white spaces y guardarlo en la variable DNI.
// Guardaremos el resto de la operación DNI %23 en la variable resto.
// A continuación, mostraremos en pantalla que la letra es la posición de la variable tabla que corresponde a lo que hay en la variable resto.

int main (int argc, char *argv[]){

    char tabla[] = "TRWAGMYFPDXBNJZSQVHLCKE";

    int dni, resto;

    system ("clear");
    printf ("\n\tIntroduzca su DNI sin letra: ");
    scanf (" %i", &dni);

    resto = dni %23;

    printf ("\n\tSu letra es la: %c\n\n", tabla[resto]);

    return EXIT_SUCCESS;
}
