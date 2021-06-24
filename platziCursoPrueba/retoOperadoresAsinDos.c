
/*
 Segundo Reto:
 Ingresa un numero entero.
* Usando operadores de asignación realiza la operación de módulo del valor ingresado con 5.
* Imprime el resultado más uno usando operadores de incremento.
 */

#include <stdio.h>
int main() {
    
    int valor;
    
    printf("Ingrese un valor: ");
    scanf("%i", &valor);
    
    valor %= 5;
    
    valor++;
    
    printf("El resultado es: %i", valor);
    
    
    
    
    return 0;
    
}
