#include <stdio.h>
#include <stdlib.h>

double suma (double num1,double num2){

    return num1+num2;
} 

int main (){

    double num1, num2; 
    printf("Introduzca el primer operando: ");
    scanf("%lf", &num1);
    printf("Introduzca el segundo operando: ");
    scanf("%lf", &num2);
    printf("El resultado de la operacion es: %lf",suma(num1,num2));

    return 0; 

}
