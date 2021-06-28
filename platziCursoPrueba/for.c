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
