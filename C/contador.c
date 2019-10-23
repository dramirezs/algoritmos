#include <stdio.h>
 
int main()
{
 int numero = 3;
 int x=0, contador=0;
 int arreglo[10]={3,7,1,2,7,3,5,6,-2,7};
  
 // Recorre el arreglo y cuenta cuántas veces aparece el valor que contiene la variable numero 
 for (x=0; x<10; x++)
     {
      if (arreglo[x] == numero)
          /* El nuevo valor de la variable contador va a ser igual a su valor actual más uno
             como postincremento ( contador++ )
             pero para que sea bastante evidente, lo escribí de forma explíci ( contador = contador+1 )
          */
          contador = contador+1; 
     }
  
 printf("\n");
 printf("El número %d aparece %d veces en el arreglo\n", numero, contador);
  
 return 0;
}
