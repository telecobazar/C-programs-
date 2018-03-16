#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){

int num1,a;
bool primo = true;
a=1; /*Esta variable usamos para contar los divisores del número introducido, la inicializamos a 1*/

printf("Introduce un numero: ");
scanf("%d",&num1);
printf("Estos son los divisores exactos encontrados: ");

  for(int i=2;i<=num1;i++){
      if(num1%i==0){ // si num1 módulo de i es 0, incrementamos a en 1.
        printf("%d, ",i);
            a++;
          }
  }
  if(a==2) /*Si al final del bucle, a vale 2, el número es primo, porque tiene solamente 2 divisores.*/
    printf("\nNo hay más porque el numero ES PRIMO");
  else{
      printf("\nNúmero NO primo pero se han encontrado los siguientes hasta llegar a el:\n\n");
      for (int j = 2; j < num1; j++) {
        for ( int x = 2; x <= j/2; x++)
          if ((j%x) == 0)
            primo = false;
              if(primo)
                printf("%d, ", j);
                  primo = true;
      }
    }
    return 0;
}
