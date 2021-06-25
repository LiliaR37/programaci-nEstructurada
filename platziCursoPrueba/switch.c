//
//  switch.c


#include <stdio.h>

int main() {
    
    printf("Condicional Switch \n");
    printf("Escoge un numero \n");
    
    int option;
    
    scanf("%i", &option);
    
    switch (option)
    {
        case 1:
            printf("Elegiste el numero 1 \n");
            break;
            
        case 2:
            printf("Elegiste el numero 2 \n");
            break;
            
        case 3:
            printf("Elegiste el numero 3 \n");
            break;
            
        default:
            printf("Elegiste una opción invalida \n");
            break;
    }
    
    
    return 0;
}
