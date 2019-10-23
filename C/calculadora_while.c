#include <stdio.h>

int main() {
	int num1 = 0,num2 = 0,resultado = 0;
	int opcion = 1;

	while (opcion > 0  && opcion < 5) {

		printf("Menu\n\n");
		printf("1- Suma\n");
		printf("2- Resta\n");
		printf("3- Multiplicacion\n");
		printf("4- Division\n");
		printf("5- Salir\n");

		printf("Selecciona una opcion...: ");
		scanf("%i", &opcion);


		if (opcion == 1) {
			printf("\nInserta el primer numero: ");
			scanf("%i", &num1);
			printf("Inserta el segundo numero: ");
			scanf("%i", &num2);
			resultado = num1 + num2;
			printf("El resultado de la operacion es: %i\n", resultado);
		} else if (opcion == 2) {
			printf("\nInserta el primer numero: ");
			scanf("%i", &num1);
			printf("Inserta el segundo numero: ");
			scanf("%i", &num2);
			resultado = num1 - num2;
			printf("El resultado de la operacion es: %i\n", resultado);
		} else if (opcion == 3) {
			printf("\nInserta el primer numero: ");
			scanf("%i", &num1);
			printf("Inserta el segundo numero: ");
			scanf("%i", &num2);
			resultado = num1 * num2;
			printf("El resultado de la operacion es: %i\n", resultado);
		} else if (opcion == 4) {
			printf("\nInserta el primer numero: ");
			scanf("%i", &num1);
			printf("Inserta el segundo numero: ");
			scanf("%i", &num2);
			resultado = num1 / num2;
			printf("El resultado de la operacion es: %i\n", resultado);
		} else if (opcion == 5){
			printf("Hasta luego \n");
		} else {
			printf("\nopcion invalida\n");
		}

	}

	return 0;
}
