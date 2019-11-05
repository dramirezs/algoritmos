#include <stdio.h>

int encuentra_pares(int lista[], int limite);
int listar(int lista[], int limite);
int sumar_lista(int lista[], int limite);


int i=0, j=0;
int k = 0;
int x = 0;

int main(){
    int num=0;

    printf("Cuantos numers quieres ingresar al arreglo? ");
    scanf("%d", &j);
    printf("\n");

    int numeros[j];

    for (i=0; i<j; i++){
        printf("\nIngresa el valor %d: ", i+1);
        scanf("%d", &num);
        numeros[i] = num;
    }

    printf("\nLos numeros del arreglo son: \n");
    listar(numeros,j-1);

    encuentra_pares(numeros, j);
    return 0;

}

int encuentra_pares(int lista[], int limite){

    int pares[limite];
    int impares[limite];

    int par=0;

    i = 0;

    for (i=0;i<limite;i++) {
        printf("%d-%d\n",i, lista[i]);
        par = lista[i] % 2;
        if (par == 0) {
            pares[k] = lista[i];
            k = k+1;
        } else {
            impares[x] = lista[i];
            x = x+1;
        }
    }

    printf("\nLos numeros del arreglo pares son: \n");
    listar(pares,k-1);

    printf("\nLos numeros del arreglo impares son: \n");
    listar(impares,x-1);

    printf("\nLa suma de los elementos del arreglo pares es: %d\n", sumar_lista(pares, k-1));
    printf("\nLa suma de los elementos del arreglo impares es: %d\n", sumar_lista(impares, x-1));

    return 0;
}

int listar(int lista[], int limite){
    for (i=0; i<=limite; i++){
        printf("%d\n", lista[i]);
    }

    return 0;
}

int sumar_lista(int lista[], int limite) {
    int resultado = 0;
    for (i=0; i<=limite; i++){
        resultado = resultado + lista[i];
    }

    return resultado;
}
