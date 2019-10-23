#include <stdio.h>
#include <stdbool.h>

int main() {
    int lista[]={-3,5,24,30,43,44,52};
    int i = 0, num = 0;
    int k = 7;
    bool encontrado = false;

    printf("\nQue numero quieres buscar?  ");
    scanf("%d",&num);

    for (i=0;i<k;i++) {
        if (num == lista[i]) {
            printf("\nEl numero que buscas está en la posición %d de la lista\n", i);
            encontrado = true;
        }
    }

    if (encontrado == false) {
      printf("\nEl numero que buscas no se encuentra en la lista\n");
    }

    return 0;
}
