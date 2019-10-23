/*
Autor: David Ramirez
Version: 2.0
Funcion del programa: mostrar 10 veces 
el mensaje "Hola Mundo"
Fecha: 24/septiembre/2019
*/

// Declaracion de bibliotecas
#include <stdio.h>

// Declaracion de variables
int i = 1;
char mensaje[10] = "Hola Mundo";

int main() {
	// Repetir 10 veces el mensaje
	// Inicio del ciclo while
	while (i <= 10) { 
	    printf("%s %d \n", mensaje, i);
	    i = i++; // tambien se puede incrementar asi: i = i + 1
	}
	// Fin del ciclo While
	
	return 0;
}
