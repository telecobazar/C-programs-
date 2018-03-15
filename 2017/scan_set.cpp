#include <stdlib.h> // directivas de cabecera
#include <stdio.h> 

int main (){
    char nombre[256];
    char hex[16];
    int num; 
    printf("Entero: ");
    scanf("%i",&num);
    scanf("%s", nombre);
    printf("[%i] => %s.\n", num, nombre);

    printf(" Hexadecimal:\n");
    scanf(" %[0-9a-fA-F]", hex);
    printf("0x%sh\n", hex);
    scanf("%[^a-f]", hex);
    //scanf("%[^\n]", nombre); == gets(char *S) (get String )
    //fgets(nombre,16,stdin);
    return EXIT_SUCCESS;
       }
