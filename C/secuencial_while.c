#include <stdio.h>
#include <stdbool.h>

int main() {
    int lista[]={-3,5,24,30,43,44,52};
    int i = -1, num = 0;
    int k = 6;
    bool encontrado = false;

    printf("\nQue numero quieres buscar?  ");
    scanf("%d",&num);

    while (i < k ) {
        i = i + 1;
        //printf("%d", i);
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
