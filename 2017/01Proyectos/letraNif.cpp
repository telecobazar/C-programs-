#include <stdlib.h>
#include <stdio.h>
int main(){
char letras[]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};
int dninumero;
char letra;


printf("Introduce el numero de tu DNI (sin letra): ");
scanf("%d",&dninumero);

printf("Introduce la letra de tu DNI: ");
scanf("%c",&letra);


/*Comparamos la letra introducida por el usuario con la calculada por el programa (resto de dividir el DNI entre 23)*/
    if(letra==letras[dninumero%23])
        printf("El DNI es correcto");
    else
        printf("El DNI NO es correcto");

    return EXIT_SUCCESS;
}
