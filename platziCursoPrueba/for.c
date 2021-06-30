//
//  for.c
//

#include <stdio.h>

int main() {

    printf("Iteradores For \n");
    
    int upperLim, bottomLim;
    
    printf("Imprimir en orden descendente\n");
    

    
    printf("Ingresar Limite superior:  \n");
    scanf("%i", &upperLim);
    
    
    printf("Ingresar Limite inferior: \n");
    scanf("%i", &bottomLim);
    
    
    for(int i = upperLim; i>= bottomLim; i--)
    {
        printf("Numero: %i \n",i);
    }
    
    return 0;
}

/*
 for(int i = 100; i > 0; i--)
 {//Notemos que escribir i-- es lo mismo a escribir i = i - 1
     printf("%i \n",i);
 }
 */
