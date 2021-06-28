//
//  arreglos.c
//  platziCursoPrueba

//

#include <stdio.h>

int main() {
    
    printf("Arreglos unidimensionales");
    
    int integerList[3];
    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;
    
    float floatList[] = {23.4, 34.5, 21.8, 54.7, 45.6};
    
    char charList[4];
    charList[0] = 'D';
    charList[1] = 'A';
    charList[2] = 'N';
    charList[3] = 'I';
    
    
    
    printf("\n Primer entero: \t\t %i", integerList[0]);
    printf("\n ultimo flotante: \t\t %f", floatList[4]);
    printf("\n Todos los caracteres \t\t %c%c%c%c. ", charList[0], charList[1], charList[2], charList[3]);
    return 0;
    
}
