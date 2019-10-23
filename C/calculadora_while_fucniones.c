#include <stdio.h>

int mostrar_menu();
void mostrar_resultado(int resultado);
int suma(int num1, int num2);
int resta(int num1, int num2);
int multiplicacion(int num1, int num2);
int division(int num1, int num2);
int pedir_numeros();
int numeros[2];
int resultado = 0;
int opcion = 1;

int main() {
	//int num1 = 0,num2 = 0

	while (opcion > 0 && opcion < 5) {
		mostrar_menu();

		if (opcion == 1) {
		    pedir_numeros();
		    resultado = suma(numeros[0], numeros[1]);
		    mostrar_resultado(resultado);
		    //mostrar_resultado(resultado = suma(numeros[0], numeros[1]));
		} else if (opcion == 2) {
			pedir_numeros();
			resultado = resta(numeros[0], numeros[1]);
			mostrar_resultado(resultado);
		} else if (opcion == 3) {
			pedir_numeros();
			resultado = multiplicacion(numeros[0], numeros[1]);
			mostrar_resultado(resultado);
		} else if (opcion == 4) {
			pedir_numeros();
			resultado = division(numeros[0], numeros[1]);
			mostrar_resultado(resultado);
		} else if (opcion == 5){
			printf("Hasta luego \n");
		} else {
			printf("\nopcion invalida\n");
		}
	}

    return 0;
}

int mostrar_menu() {

	printf("\n\n\n\nMenu\n\n");
	printf("1- Suma\n");
	printf("2- Resta\n");
	printf("3- Multiplicacion\n");
	printf("4- Division\n");
	printf("5- Salir\n");

	printf("Selecciona una opcion...: ");
	scanf("%d", &opcion);
	
}

void mostrar_resultado(int resultado) {
    printf("El resultado de la operacion es %i\n ", resultado);
}

int suma(int num1, int num2){
	return num1 + num2;
}

int resta(int num1, int num2){
    return num1 - num2;
}

int multiplicacion(int num1, int num2){
    return num1 * num2;
}

int division(int num1, int num2){
    return num1 / num2;
}

int pedir_numeros() {
    printf("Ingresa el primer numero... ");
    scanf("%d", &numeros[0]);
    printf("Ingresa el segundo numero... ");
    scanf("%d", &numeros[1]);

    return 0;
}
