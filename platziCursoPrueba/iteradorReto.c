/*
 Escribir un programa que nos diga el número más grande de un arreglo.
 Utilizando arreglos e iteradores.
 */

#include <stdio.h>

int main() {
    int tamaño;
    int mayor = 0;
    printf("Encontrar el número más grande de un arreglo \n");
    
    printf("Escriba el tamaño del arreglo: ");
    scanf("%i", &tamaño);
    int arreglo[tamaño];
    printf("Ingresa los valores \n");
    
    //Llenado de arreglo
    for (int i = 0; i < tamaño; i++) {
        printf("Ingresa el valor[%i]",i);
        scanf("%i",&arreglo[i]);
     
      
    }
    
    //Busqueda numero mayor
    
    for (int i = 0; i <tamaño; i++)
    {
        
        if(arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
     
    }
    printf("El numero mayor es: %i \n", mayor);
    return 0;
    
}
