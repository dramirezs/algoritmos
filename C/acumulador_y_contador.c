#include <stdio.h>
 
int main() {
    int i = 1;
    int acumulador = 0;
    int lista[] = {-3,0,50,2,7,3,5,6,-2,7};
    int pares = 0, impares = 0, contador = 0;
  
    for (i=0; i<10; i++) {
        if ((lista[i] % 2)  == 0) {
            pares = pares + 1;
         
        } else {
            impares = impares + 1;
        }      
        
        if (lista[i] > 0) {
          acumulador = acumulador + lista[i];
          contador = contador + 1;
        } 
    }
    
    printf("En el arreglo hay %d numeros pares y %d impares\n", pares, impares);
    printf("Todos los numeros del arreglo mayores a 0 son %d y suman %d\n",contador, acumulador);
  
    return 0;
}
