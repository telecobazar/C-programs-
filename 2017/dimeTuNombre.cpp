#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

   char nombre[20];

    printf("Bienvenido...\n por favor introduzca su nombre.");
    scanf(" %s", nombre);
    printf ("Hola, %s.\n", nombre);
    return EXIT_SUCCESS;
}
