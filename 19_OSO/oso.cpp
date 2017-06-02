#include <stdio.h>
#include <stdlib.h>

#define N 8

void limpiar_tablero(char tablero [N][N]){

    for (int f=0; f<N; f++)
        for (int c=0; c<N; c++)
            tablero[f][c] = ' ';
}

void dibujar_tablero(char tablero [N][N]){

    for (int f=0; f<N; f++)
        for (int c=0; c<N; c++)
            printf(" %c ", tablero[f][c]);
    printf("\n");
}

void pedir_coordenadas(char tablero[N][N]){

    printf("Situe una letra en el tablero (O/S): ");
    scanf(" %c", tablero[N][N]);
}

int main (int argc, char *argv[]){

    char tablero [N][N];

    limpiar_tablero(tablero);
    dibujar_tablero(tablero);
    pedir_coordenadas(tablero);

	return EXIT_SUCCESS;
}
