#include <stdio.h>
#include <stdlib.h>

#define N 8

void imprimir (const char *p){

    if (*p=='\0'){
        printf("\n");
        return;
    }
    printf("%c", *p);
    imprimir(p+1);

}

int main (int argc, char *argv[]){

    imprimir ("palabra a imprimir");

	return EXIT_SUCCESS;
}
