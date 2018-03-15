#include <stdlib.h> // directivas de cabecera
#include <stdio.h>

#define D 3
#define X 0
#define Y 1
#define Z 2

int main (){

  double vertice[D];
  printf("introduzca las coordenadas, por favor");
  scanf("(%lf ,%lf ,%lf ) ",
      &vertice[X], &vertice [Y], &vertice[Z]);

  printf("(%.2lf, %.2lf, %.2lf) =>\t", 
          vertice [X], vertice[Y], vertice[Z]);

  printf("(%.2lf,%.2lf)",vertice[X]/vertice[Z],
          -vertice[Y]/vertice[Z]);


	return EXIT_SUCCESS; 

}

