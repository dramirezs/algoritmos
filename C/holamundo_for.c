#include <stdio.h>

int i = 0;
char mensaje[10] = "Hola Mundo";

int main() {
	for (i = 1; i <= 10; i++) {
	    printf("%s %d \n", mensaje, i);
	}
	return 0;
}
