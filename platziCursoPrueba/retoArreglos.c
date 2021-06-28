/*
 RETO:
* Ingresar valores a un arreglo con un tamaño de 5.
* Multiplicar todos sus valores.
* Imprimir el resultado.
 */

#include <stdio.h>

int main() {
    int arreglo[5];
    int resultado;
    
    printf("Multiplicar los elementos \n");
    printf("Ingresa los valores:  \n");
    printf("Valor[1]: \n");
    scanf("%i", &arreglo[0]);
    
    printf("Valor[2]: \n");
    scanf("%i", &arreglo[1]);
    
    printf("Valor[3]: \n");
    scanf("%i", &arreglo[2]);
    
    printf("Valor[4]: \n");
    scanf("%i", &arreglo[3]);
    
    printf("Valor[5]: \n");
    scanf("%i", &arreglo[4]);
    
    resultado = arreglo[0] * arreglo[1] * arreglo[2] * arreglo[3] * arreglo[4];
    printf("El resultado es: %i", resultado);
    
    return 0;
}
