
//Primer Reto:
//* Ingresa los valores necesarios para calcular el área de un cilindro (radio, altura, área y volumen)
//* Realiza la operación.
//*Imprime el resultado del área


#include <stdio.h>

int main() {
 
    int  radio;
    int altura;
    float area;
    float volumen;
    float pi = 3.14159;
    
    printf("Hola, Vamos a calcular el volumen de un cilindro!! \n");
    
    printf("Ingresa el radio de la base: ");
    scanf("%i", &radio);
    
    printf("Ingresa la altura del cilindro: ");
    scanf("%i", &altura);
    
    area =  pi * radio * radio;
    volumen = pi * radio * radio * altura;
    
    printf("El area de la base es: %f \n", area);
    printf("El volumen del cilindro es: %f \n", volumen );
    return 0;
}
