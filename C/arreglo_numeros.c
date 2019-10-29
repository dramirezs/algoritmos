#include <stdio.h>

int main() {
    int i=0,n=0, numero=0;

    printf("Cuantos numeros quieres ingresar a la lista? ");
    scanf("%d", &i);

    int numeros[i];

    for (n=0;n<i;n++){
        printf("\nIngresa el numero de la posicion %d: ", n+1);
        scanf("%d", &numero);
        numeros[n] = numero;
    }

    printf("\n\nLos numeros que se ingresaron a la lista son los siguientes: ");
    for (n=0;n<i;n++){
        printf("\n%d", numeros[n]);
    }
    printf("\n");
    return 0;
}


