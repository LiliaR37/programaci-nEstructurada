// Segundo Reto
//  retoOperadoresDos.c
//

#include <stdio.h>

int main() {
    
    float fahrenheit;
    float celcius;


    printf("Hola, Vamos a transformar grados Fahrenheit a grados Celsius \n");
    
    printf("Ingresa la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celcius = (fahrenheit - 32) * 5 / 9;
    
    printf("La temperatura en grados Celsius es: %f", celcius);
    
    return 0;
}
