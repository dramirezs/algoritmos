#include <stdio.h>

int main() {

  int num1,num2,resultado;
  int opcion;

  printf("Menu\n\n");
  printf("1- Suma\n");
  printf("2- Resta\n");
  printf("3- Multiplicacion\n");
  printf("4- Division\n");
  printf("Elige una opcion...: ");

  scanf("%i",&opcion);

  if (opcion > 0 && opcion < 5) {
    printf("Ingresa el primer elemento: ");
    scanf("%i",&num1);
    printf("Ingresa el segundo elemento: ");
    scanf("%i",&num2);

  
      if (opcion == 1) {
        resultado = num1 + num2;
      } else if (opcion == 2) {
        resultado = num1 - num2;
      } else if (opcion == 3) {
        resultado = num1 * num2;
      } else if (opcion == 4) {
        resultado = num1 / num2;
      }

      printf("\nEl resultado de la operacion es: %i\n", resultado);
  } else {
    printf("Opcion invalida\n"); 
  }

    
  return 0;

}




























 
