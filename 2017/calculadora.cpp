#include <stdlib.h> // directivas de cabecera
#include <stdio.h>
#include <math.h>

int main (){     
double op1, op2, res;
int opcion=0;

  printf("Bienvenido a la calculadora...\n---------------------------------\n");

  printf("Introduzca el operando 1:\n");
  scanf("%lf", &op1);
  printf("Introduzca el operando 2:\n ");
  scanf("%lf", &op2);
  fflush(stdin);

  printf("Seleccione la operacion que desea realizar:\n\n-------------------------------------------------------\n");
  printf("|\tPulse 1 para sumar                            |\n");
  printf("|\tPulse 2 para restar                           |\n");
  printf("|\tPulse 3 para producto                         |\n");
  printf("|\tPulse 4 para la division                      |\n");
  printf("|\tPulse 5 para operar con otros operandos       |\n");
  printf("|\tPulse 6 para hacer la raiz cuadrada           |\n");
  printf("|\tPULSE 0 PARA SALIR                            |\n");
  printf("-------------------------------------------------------\n");

  do {
        scanf("%i",&opcion);
        if(opcion== 0){
            printf ("Gracias por utilizar mi calculadora.\n");
                 return EXIT_SUCCESS;
        }
        if ((opcion !=1)&&(opcion!=2)&&(opcion !=3)&&(opcion!=4)&&(opcion!=5)&&(opcion!=6)){
            printf("Teclea una opcion de las disponibles\n" );
        }

        if (opcion ==1){ res=op1+op2;
            printf("El resultado de la operación es:""%lf\n" ,res);}
        else
        if (opcion ==2){ res=op1-op2;
            printf("El resultado de la operación es:""%lf\n" ,res);}
        else
        if (opcion ==3){ res= op1*op2;
            printf("El resultado de la operación es:""%lf\n" ,res);}
        else
        if (opcion ==4){ res = op1/op2;
            printf("El resultado de la operación es:""%lf\n" ,res);}
        else
        if (opcion==6){res = sqrt(op1);
            printf("El resultado de la operación es:""%lf\n" ,res);}

        if(opcion==5){
            fflush(stdin);
            printf("Introduzca el nuevo operando 1:\n");
            scanf("%lf", &op1);
            fflush(stdin);
            printf("Introduzca el nuevo operando 2:\n");
            scanf("%lf", &op2);
        }

   printf("\n\tTeclee una opción de la lista:\n");
  }while(opcion!=0);
} //main
