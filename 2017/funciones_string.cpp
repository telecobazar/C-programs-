#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100//256 celdas de memoria reservada

int main (){

    const char *p="The world is"; // constante tipo cadena -> se almacena lo escrito en la direccion de memoria

    /* Pequeño apunte de punteros: 
     * Un puntero es una variable que contiene una direccion de memoria.
     *
     * ->   char const *p; // puntero a una constante --forma coherente de expresar que el char es una constante (equivalente a lo de arriba).
     * ->   char * const p; es un puntero constante (fijo).
     * ->   char const * const p; puntero fijo a una constante.
     *
     */

    char frase [N]= "a vampire.\n"; // inicializacion de una cadena -> se almacena en la variable asignada.
    char *d =&frase[0]; // o bien char *d=frase; d es la direccion del char. no sabe cuanto ocupa
    printf("d ocupa %lu bytes.\n", sizeof (d));// d ocupa 8 bytes 

    frase [2]== 'v';//operador relacional Notacion de arrays
    *d == 'v'; //notacion de punteros 
    *(d+2)=='m';// el 2 está en aritmetica de punteros 
    *d + 2=='x';// suma 2 al codigo ascii de la v 
   return EXIT_SUCCESS; 

}
