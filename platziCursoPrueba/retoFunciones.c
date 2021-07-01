/*
 Primer reto:
 * Vamos a calcular la potencia de un número.
 * Ingresar un valor base.
 * Ingresar un valor de
 exponente.
 * Dentro de una función calcular
 el exponente del número base.
 * Imprime el resultado.
 */

#include <stdio.h>

int CalculoExpo(int base, int expo)

{
    int calculo = 1;
    for (int i = 0; i < expo; i++) {
       calculo *= base  ;
        
}
    return calculo;
    
}

int main()
{
   
    int base;
    int expo;

    printf("Ingresa el valor base \n");
    scanf("%i", &base);

    printf("Ingresa el valor del exponente \n");
    scanf("%i", &expo);

    int result = CalculoExpo(base, expo);
    
    printf("El resultado es: %i", result);
    return 0;
    
}





