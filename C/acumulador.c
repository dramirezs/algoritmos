#include <stdio.h>

int main() {
    int i = 1;
    int acumulador = 0;
    int lista[] = {-3,0,50,2,7,3,5,6,-2,7,51};

    for (i=0; i<10; i++) {
      if (lista[i] > 0)
          acumulador = acumulador + lista[i];
    }

    printf("Todos los numeros mayores a 0 en el arreglo suman %d\n",acumulador);

    return 0;
}
