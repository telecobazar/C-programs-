/*programa que convierte de binario a decimal*/

#include <stdlib.h>
#include <stdio.h>

int main (){
 int bits, bit1, bit2, bit3;

  printf("introduzca el numero de bits de entrada entre 1 y 3:\n");
  scanf("%i",&bits);

       for(int cont=0;cont<bits;cont++){

           printf("Introduzca el valor del bit de peso %i\n", cont);

           if(bits==1)
             scanf("%i",&bit1);
           if(bits==2)
             scanf("%i",&bit2);
           if(bits==3)
             scanf("%i",&bit3);

           if((bit1==0)&&(bit2=0))
             printf("El numero en decimal es 0");
           if((bit1==0)&&(bit2=1))
             printf("El numero en decimal es 1");
           if((bit1==1)&&(bit2=0))
             printf("El numero en decimal es 2");
           if((bit1==1)&&(bit2=1))
             printf("El numero en decimal es 3");



        }
      return EXIT_SUCCESS;
}
