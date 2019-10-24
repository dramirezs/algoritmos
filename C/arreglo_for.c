#include <stdio.h>
#include < iostream>

int main(){
    string integrantes;
    int i = 0, n = 0;
    char nombre = ' ';
    printf("Cuantos integrantes hay en tu equipo? ");
    scanf("%d", &n);
    printf("%d", i);
    for (i = 0; i < n; i++){
        printf("\nCuál es el nombre del integrante %d de tu equipo?", i+1);
        scanf(" %c", &nombre);
        integrantes[i] = nombre;
        //gets(integrantes[i]);
    }

    for (i = 0;i < n; i++){
        printf("\nEl nombre del integrante %d es: %s", i+1, integrantes[i]);
    }

    return 0;

}
