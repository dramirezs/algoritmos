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
  }

  switch (opcion) {
  
      case 1:
        resultado = num1 + num2;
	printf("\nEl resultado de la operacion es: %i\n", resultado);
	break;
      case 2:
        resultado = num1 - num2;
	printf("\nEl resultado de la operacion es: %i\n", resultado);
	break;
      case 3:
        resultado = num1 * num2;
	printf("\nEl resultado de la operacion es: %i\n", resultado);
	break;
      case 4: 
	resultado = num1 / num2;
	printf("\nEl resultado de la operacion es: %i\n", resultado);
        break;
      default:
	printf("Opcion invalida\n");
	break;
  }
  
  return 0;

}




























 
