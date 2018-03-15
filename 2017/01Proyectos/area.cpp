#include<stdio.h>
#include<stdlib.h>
#define PI 3.1416

int main(){
    double lado, radio, area, perimetro; 
    int opcion=0;
    system("toilet AREAS\n");

    printf("Pulse 1 si desea calcular los parametros de un CUADRADO\n");
    printf("Pulse 2 si desea calcular los parametros de un CIRCULO\n");
    printf("Para salir de la aplicacion presione 0\n");

    do{
      scanf("%i",&opcion);
      if (opcion==0){
              return EXIT_SUCCESS;
      }

      if(opcion==1){
         printf("Teclee el lado: ");
         scanf("%lf",&lado);

         area=lado*lado;
         perimetro=4*lado;

         printf("Area: %lf\n" "Perimetro:%lf\n",area, perimetro);
    }
      if (opcion==2){
          printf("Teclee el radio:");
          scanf("%lf", &radio);

          perimetro= (2*PI) * radio;
          area=PI*radio*radio;
          printf("Area:%lf\n" "Perimetro:%lf\n",area, perimetro);
        }

      if (opcion==0){
        return EXIT_SUCCESS;
      }
       if ((opcion !=1)&&(opcion!=2))
           printf("Teclea una opcion de las disponibles.");
    } while(opcion!=0);
}
