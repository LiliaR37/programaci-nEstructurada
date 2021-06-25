/*
 Reto:
 * Vamos a hacer un pequeño juego de texto.
 * Imprimir una pequeña introducción, con tres opciones a elegir, numeradas del 1 al 3.
 * Cada una de ellas te debe de imprimir un resultado distinto en la historia.
 */


#include <stdio.h>

int main() {
    
    printf("Hola, Tienes la posibilidad de elegir un destino. Hay algunas sorpresas!! \n");
    
    int destino;
    printf("Escribe 1, si quieres ir a Roma \n");
    printf("Escribe 2, si quieres ir a Londres \n");
    printf("Escribe 3, si quieres ir a Francia \n");
    scanf("%i", &destino);
    
    switch (destino) {
        case 1:
            printf("Felicidades, te ganaste 5 días con todo incluido");
            break;
            
        case 2:
            printf("Lo siento pero en Londres, no tenemos sorpresas");
            break;
        case 3:
            printf("Felicidades, te ganaste una reserva en el restaurante de Remy (El de ratatouille)");
            break;
        default:
            printf("Elegiste una opción invalida \n");
            break;
    }
    
    
   
    
    
    
    
    
    return 0;

}
