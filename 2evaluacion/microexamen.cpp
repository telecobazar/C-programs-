#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

int main (){
 char cadena1[N],cadena2[N];
 char *nombre;
 int longitud;

    printf("Por favor introduzca su nombre: ");
    scanf("%s%s",cadena1, cadena2);
    printf("la longitud de su nombre es: ");
    longitud = strlen(strcat(cadena1,cadena2));
    printf("Tiene una longitud de: %i", longitud);

    buffer = (char*) malloc (longitud+1);
    strncpy (buffer, cadena, sizeof (cadena));
    printf("%s\n", buffer);
    printf("%s", cadena);
    free (buffer);

 return 0;
}
