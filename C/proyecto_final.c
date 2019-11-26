#include <stdio.h>
#define MAX 10

int ordenamiento();
int buscar_pares(int lista[]);
int listar(int lista[], int limite);
int sumar(int lista[], int limite);
int busqueda(int num, int limite);

int numeros[MAX];
int pares[MAX];
int impares[MAX];

int apar=0, aimpar=0;

int main() {

    int i=0;
    int ingresados=0, temporal=0;

    printf("********************************************************************");
    printf("\n");
    printf("* Programa que ordena de menor a menor 10 elementos de una lista y *");
    printf("\n");
    printf("* obtiene los numeros pares e impares.                             *");
    printf("\n");
    printf("********************************************************************");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    while (i >= 0 && i < MAX){
        if (i == 0){
            printf("Ingresa el elemento %d de la lista: ", i+1);
            scanf("%d", &numeros[i]);
            i = i + 1;
            ingresados = ingresados + 1;
        } else {
            printf("Ingresa el elemento %d de la lista: ", i+1);
            scanf("%d", &temporal);
            if (busqueda(temporal, ingresados) == 0){
                numeros[i] = temporal;
                ingresados = ingresados +1;
                i = i + 1;
            } else {
                printf("Este numero ya lo ingresaste, intenta on otro...\n");
            }
        printf("\n");
        }
    }

    printf("Los elementos de la lista que se ingresaron son los siguientes: ");
    printf("\n");
    listar(numeros, MAX);
    printf("\n");
    ordenamiento(numeros);
    printf("\n");
    printf("Lista Ordenada: ");
    printf("\n");
    listar(numeros, MAX);
    buscar_pares(numeros);
    printf("\n");
    printf("\n");
    printf("Los numeros pares ingresados son los siguientes: ");
    printf("\n");
    listar(pares, apar);
    printf("\n");
    printf("Los numeros impares ingresados son los siguientes: ");
    printf("\n");
    listar(impares, aimpar);
    printf("\n");
    printf("\n");
    printf("La suma de todos los numeros de la lista es: %d", sumar(numeros, MAX));
    printf("\n");
    printf("La suma de todos los numeros pares de la lista es: %d", sumar(pares, apar));
    printf("\n");
    printf("La suma de todos los numeros impares de la lista es: %d", sumar(impares, aimpar));
    printf("\n");
}

int listar(int lista[], int limite){
    int i=0;
    for (i=0; i<limite; i++){
        printf("%d ", lista[i]);
    }
    printf("\n");
    return 0;
}

int buscar_pares(int lista[]){
    int par=0, i=0;
    for (i=0;i<MAX;i++) {
        par = lista[i] % 2;
        if (par == 0) {
            pares[apar] = lista[i];
            apar = apar+1;
        } else {
            impares[aimpar] = lista[i];
            aimpar = aimpar+1;
        }
    }
    return 0;
}

int ordenamiento(){
    int i=0, comodin=0, bandera=1;
    while (bandera>0){
        bandera = 0;
        for (i=0; i<MAX-1; i++){
            if (numeros[i] > numeros[i+1]){
                comodin = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = comodin;
                bandera = bandera + 1;
            }
        }
    }
}

int sumar(int lista[], int limite){
    int i=0, total=0;
    for (i=0; i<MAX; i++){
        total = total + lista[i];
    }
    return total;
}

int busqueda(int num, int limite){
    int i=0, bandera=0;
    for (i=0;i<limite;i++){
        if (num == numeros[i]){
            bandera = 1;
        }
    }
    return bandera;
}
