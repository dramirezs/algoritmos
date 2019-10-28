#include <stdio.h>
#include <stdlib.h>
#define TAM 40

int main()
{
    int i,cant,tam;

    printf("Cuantos integrantes hay en tu equipo?: ");
    scanf("%d",&cant);
    //printf("Ingresar el tamanio: ");
    //scanf("%d",&tam);

    char *arreglo[cant];
    char *dato;

    for(i=0; i<cant; i++){
        printf("El nombre del alumno %i es: ",i+1);
        dato = (char *) malloc(TAM);
        //gets(dato);
        //scanf("%[^\n]s", dato);
        scanf("%s",dato);
        arreglo[i] = dato;
    }

    printf("\nLos integrantes del equipo son: \n");
    for(i=0; i<cant; i++){
        printf(" %s\n",arreglo[i]);
    }
    free(dato);
    return 0;
}
