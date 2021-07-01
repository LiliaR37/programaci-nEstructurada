/*
 Reto:
 * Hacer un programa de cambie de dólares a tu moneda y de tu moneda a dólares.
 * Usa funciones.
 */

#include <stdio.h>
//Funcion de cambio a pesos
float  PesosConverter(float pesos, float datosConvertir)

{
    float  calculo =  datosConvertir * pesos;
    return  calculo;
}

//Funcion de cambio a dolares
float DolarConverter(float pesos, float datosConvertir)
{
    float result = datosConvertir/ pesos;
    
    return result;
}


int main() {
    printf("Bienvenido al convertidor de monedas: \n");
    
    char option;
    float pesos = 166;
    float datosConvertir;
    float totalDolar;
    float totalPe;

    //Para almacenar las opciones
    printf("Si quieres convertir de dolares a pesos presiona D \n");
    printf("Si quieres convertir de pesos a dolares presiona P \n");
    scanf("%c",&option);
    
    //Para almacenar la  cantidad a cambiar
    printf("Escribe la cantidad que necesitas cambiar: ");
    scanf("%f", &datosConvertir);
    
    //Para las opciones de P o D
    switch (option) {
        case 'D':
            totalPe =  PesosConverter( pesos, datosConvertir);
              printf("El resultado en pesos es: %f",totalPe);
     
    
            break;
        case 'P':
            totalDolar =  DolarConverter( pesos, datosConvertir);
            printf("El resultado en dolares es: %f", totalDolar);
            break;
            
        default:
            printf("Elegiste una opción invalida \n");
            break;
    }
    

    
    return 0;
    
}
