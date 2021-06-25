//
//  condicionalesIf.c
//  platziCursoPrueba
//
//  Created by LILIA MARIANGEL on 06/25/21.
//

#include <stdio.h>

int main() {
    float valA, valB, valC;
    valA = valB = 100;
    
    printf("Primera condicion \n");
    
    if (valA == valB)
    {
        printf("Ambos son iguales \n");
    }
    
    printf("Segunda condicion \n");
    
    
    if (valA == valB)
    {
        printf("Ambos son iguales \n");
        valC = valA + valB;
        
        printf("Ademas la suma de ambos numeros es: %f", valC);
    }
    
    
    
    return 0;
}
