//
//  operadoresIncre.c
//  platziCursoPrueba
//
//  Created by LILIA MARIANGEL on 06/24/21.
//


#include <stdio.h>

int main() {

    printf("Operadores de incremento y decremento \n");
    
    int value, result;
    
    value = 25;
    
    result = value++;
    
    printf("Resultado: %i \n", result);
    
    value = 25;
    result = ++value;
    
    printf("Resultado: %i \n", result);
    
    value = 25;
    
    result = value--;
    
    printf("Resultado: %i \n", result);
    
    value = 25;
    result = --value;
    
    printf("Resultado: %i \n", result);
    
    
    
    
    
    
    
    return 0;
}
