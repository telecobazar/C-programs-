#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n){
  if (n<2)
    return n;
  else
  return fibonacci(n-1)+fibonacci(n-2);
}


int main() {
  int num=0, res=0;
  printf("::Serie de Fibonacci::\n");
  printf("Introduzca el numero de términos para la serie: ");
  scanf("%i",&num);
  printf("El resultado es: ");
  for(int i=1; i<=num;i++){
    res=fibonacci(i);
    printf("%i ", res);
  }
return 0;
}
