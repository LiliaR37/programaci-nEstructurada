//
//  doWhile.c


#include <stdio.h>

int main() {
    
    char answer = 'q';
    char value;
    
    do
    {
        printf("Ingresa una letra: ");
        scanf("%c", &value);
    } while (value != answer);
    
    printf("Coinciden las letras %c === %c", value,answer);
    return 0;
}
