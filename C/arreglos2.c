// Librerias 
#include <stdio.h>

// Inicio
int main() {

    // Arreglos y variables
    int arreglo[3][2];
    int i = 0;
    int j = 0;

    // Asignar valor a la posicion de un arreglo
    arregloDeEnteros[0] = 32;

    // Mostrar los valores de un arreglo
    printf ("El valor del arreglo en la posicion 0 es %d \n", arregloDeEnteros[0]);
    printf ("El valor del arreglo en la posicion 1 es %d \n", arregloDeEnteros[1]);
    printf ("El valor del arreglo en la posicion 2 es %d \n", arregloDeEnteros[2]);
    printf ("El valor del arreglo en la posicion 3 es %d \n", arregloDeEnteros[3]);

    printf("\n\nMostrando lo mismo con un ciclo FOR\n");
    for (i = 0; i <= 3; i++) {
        printf("El valor del arreglo en la posicion %d es %d \n", i, arregloDeEnteros[i]);
    }
    return 0;
}
