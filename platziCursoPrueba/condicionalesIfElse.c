//
//  condicionalesIfElse.c
//

#include <stdio.h>


int main() {
    printf("Condicion if, else, else if \n");
    
    float valA, valB, valC;
    valA = 50;
    valB = 100;
    valC = 150;
    
    if(valA == valB)
    {
        printf("No se va a cumplir esta condicion");
    }
    else if (valB == valC)
    {
        printf("Tampoco se va a cumplir esta condicion");
    }
    else
    {
        printf("Ninguna condicion se cumple \n");
        printf("Despue de esta linea, termina el programa");
    }
    return 0;
    
}
