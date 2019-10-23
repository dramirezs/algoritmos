#include <stdio.h>

int main() {
        int a,b,comodin;

        a = 8;
        b = 4;
        comodin = 0;

        printf("El valor de a antes del intercambio es: %i \n", a);
        printf("El valor de b antes del intercambio es: %i \n", b);
        printf("El valor de c antes del intercambio es: %i \n", comodin);

        comodin = a;
        a = b;
        b = comodin;

	printf("\n\n");
        printf("El valor de a despues del intercambio es: %i \n", a);
        printf("El valor de b despues del intercambio es: %i \n", b);
        printf("El valor de c despues del intercambio es: %i \n", comodin);

	return 0;
}
