#include <stdlib.h> // directivas de cabecera
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main (){ 
double op1, op2, res;
int opcion=0;

  system("teleco.jpg");
  printf("\x1B[31m\t Bienvenido a la calculadora...\x1B[39m\n*******************************************************\n");
  printf("* Introduzca el primer operando -> ");
  scanf("%lf", &op1);
  printf("* Introduzca el segundo operando-> ");
  scanf("%lf", &op2);
  fflush(stdin);

  printf("\n*******************************************************\n|\tSeleccione la operacion que desea realizar:   |\n");
  printf("|\tPulse 1 para sumar                            |\n");
  printf("|\tPulse 2 para restar                           |\n");
  printf("|\tPulse 3 para producto                         |\n");
  printf("|\tPulse 4 para dividir                          |\n");
  printf("|\tPulse 5 para raiz cuadrada                    |\n");
  printf("|\tPulse 6 para logaritmo decimal                |\n");
  printf("|\tPulse 7 para potencia                         |\n");
  printf("|\tPulse 8 para coseno()                         |\n");
  printf("|\tPulse 9 para seno()                           |\n");
  printf("|\tPulse 10 para operar con otros operandos      |\n");
  printf("|\tPULSE 0 PARA SALIR                            |\n");
  printf("*******************************************************\n");

  do {
        scanf("%i",&opcion);
        if(opcion== 0){
            printf("*******************************************************\n");
            system("toilet Gracias");
            printf("*******************************************************\n");

                 return EXIT_SUCCESS;
        }
        if ((opcion !=1)&&(opcion!=2)&&(opcion !=3)&&(opcion!=4)&&(opcion!=5)&&(opcion!=6)&&(opcion!=7)&&(opcion!=8)&&(opcion!=9)&&(opcion!=10)){
            printf("\x1B[31m Teclea una opcion de las disponibles. \x1B[39m\n" );
        }

        if (opcion ==1){ res=op1+op2;
            printf("El resultado de la operación es:""%.3f\n" ,res);}
        else
        if (opcion ==2){ res=op1-op2;
            printf("El resultado de la operación es:""%.3f\n" ,res);}
        else
        if (opcion ==3){ res= op1*op2;
            printf("El resultado de la operación es:""%.3f\n" ,res);}
        else
        if (opcion ==4){ res = op1/op2;
            printf("El resultado de la operación es:""%.3f\n" ,res);}
        else
        if (opcion==5){res = sqrt(op1);
            printf("El resultado de la operación es:""%.3f\n" ,res);}

        else
        if(opcion==6){
             if (op1 > 0) {
               res = log10(op1);
               printf("\nEl logaritmo de %.3f es %.3f", op1, res);//limita a 3 decimales 
             }
        }
        else 
            if(opcion==7){res = pow(op1, op2);
            printf("El resultado de la operación es:""%.3f\n" ,res);}

         else 
             if(opcion==8){res= cos(op1);
             printf("El resultado del coseno con ese angulo es:""%.3f\n",res);}

         else
             if(opcion==9){res= sin(op1);
             printf("El resultado del seno con ese angulo es:""%.3f\n",res);}



        if(opcion==10){
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
