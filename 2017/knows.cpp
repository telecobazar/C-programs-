#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

#define N 0x10

int main (){
   char nombre[N]; 
   int lista[N];
   char no_[N] = {'h','o','l','a','\0'};
   char nomb[N] ="hola";

    nomb[3]='o';

    printf("Nombre Ocupa: %lu bytes.\n",sizeof (nombre));
    printf("Nombre ocupa: %Xh bytes en hexadecimal.\n", (int)sizeof(nombre));
    printf("Lista ocupa %lu bytes.\n",sizeof(lista));
    printf("Lista ocupa:%lu celdas.\n", sizeof(lista)/sizeof(int));

     printf("%c", nombre[0]);
     printf("%c", nombre[1]);
     printf("%c", nombre[2]);
     printf("%c", nombre[3]);
     printf("%c", nombre[4]);
     printf("%c", nombre[5]);
     printf("\n");

     printf("%s\n", nombre);

     bzero(lista,sizeof(lista));
     memset(lista +2,3,2);

     printf("%x.", lista[0]);
     printf("%x.", lista[1]);
     printf("%x.", lista[2]);
     printf("%x,", lista[3]);
     printf("%x,", lista[4]);
     printf("%x.", lista[5]);
     printf("\n");

    printf("Dime tu nombre: ");
    fgets(nombre, N, stdin);
    sprintf(nomb,"Hola, %s",nombre);
    printf("%s\n", nomb);

  return EXIT_SUCCESS;

}
