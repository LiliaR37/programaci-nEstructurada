//
//  recursividad.c

#include <stdio.h>

int factorial(int n)
{
    printf("Entra a la funcion factorial, n vale: %i \n", n);
    
    //condicion
    if (n > 1)
    {
        printf("La funcion se llamara a si misma otra vez \n");
        return n * factorial(n-1);
    } else
    {
        printf("n es igual a 1, termina la recursividad \n");
        return 1;
    }
    
}

int main()
{
    int result = factorial(5);
    
    printf(" El resultado es: %i\n", result);
    return  0;
    
}
