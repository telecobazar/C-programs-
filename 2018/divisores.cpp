#include <stdio.h>
#include <stdlib.h>

bool tiene_un_divisor(int divisor, int dividendo){
  if (dividendo==1)
    return false;
  if(divisor%dividendo==0)
     return true;
  return tiene_un_divisor(divisor, dividendo-1);
}

int main() {
  int numero;
  printf("Por favor Introduzca un numero:");
  scanf("%i",&numero);
  if (tiene_un_divisor(numero,numero/2))
    printf("\nEl %i introducido tiene al menos un divisor.", numero);
    else
    printf("\nEl %i es primo o no tiene divisores a parte de el mismo.", numero);
  return 0;
}
