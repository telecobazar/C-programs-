#include <stdio.h>
#include <stdlib.h>


void palindromo(const char * letra){
  printf("%c",*letra);
    if (*letra!='\0')
       palindromo (letra +1);
    else
       printf("\n");
    printf("%c",*letra);
}

int main(){
  const char * const frase ="dabale arroz a la zorra el abad";
  const char * letra = frase;
  palindromo(letra);
  return 0;
}
