/*
 Primer Reto:
* Imprime la instrucción ingresa el primer número.
* Ingresa el número en una variable.
* Repite para una segunda variable.
* Si el primer número es menor que el segundo, imprime el primer número.
* Si no, imprime el segundo número.
 */


#include <stdio.h>

int main() {
    
    printf("Si me das dos numeros enteros, te dare el menor entre ellos! \n");
    
    int numA;
    int numB;
    
    printf("Ingresa el primer numero: \n");
    scanf("%i", &numA);
    
    printf("Ingresa el segundo numero: \n");
    scanf("%i", &numB);
    
    
    if (numA < numB)
    {
        printf("El numero menor es: %i", numA);
    }
    else
    {
        printf("El numero menor es: %i", numB);
    }
    return 0;
    
}
