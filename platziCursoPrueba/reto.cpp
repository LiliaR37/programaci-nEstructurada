//
//  reto.cpp
//  platziCursoPrueba
//
//  Created by LILIA MARIANGEL on 06/23/21.
//

#include <stdio.h>

int main() {
    int x;
    int y;
    int l;

    
    printf("Ingrese el valor de la variable x: ");
    scanf("%i", &x);
    
    printf("Ingrese el valor de la variable y: ");
    scanf("%i", &y);
    
    l = x;
    x = y;
   
    printf("El valor intercambiado del entero x es: %i \n", x);
    printf("El valor intercambiado del entero y es: %i \n", l);
    
    return 0;
}
