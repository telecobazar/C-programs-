#include <stdlib.h> /*directivas de cabecera*/
#include <stdio.h>

int main (){

      char nombreConApellidos [2][5];

      printf("Bienvenido !\n"); /*llamada a la funcion*/

      printf("introduzca su nombre con apellidos");

      fgets("%c %c",nombreConApellidos[0],nombreConApellidos[2]);

        return EXIT_SUCCESS; 
}
