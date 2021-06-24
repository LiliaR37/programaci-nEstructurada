//
//  main.cpp
//  
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
   /* std::cout << "Hello, World!\n";
    int number = 2;
    float floatA = 1.1;
    double doubleA = 1.2;
    char letterA = 'A';
    
    printf("El valor del número entero A es: %i \n", number );
    printf("El valor de mi flotante A es: %f \n", floatA);
    printf("El valor de mi double A es: %f \n", doubleA);
    printf("El valor de mi caracter A es: %c \n", letterA);
    
    return 0;
    */
    
    int numberA;
    float floatA;
    char letterA;
    
    printf("Ingresa el valor del entero A: ");
    scanf("%i", &numberA);
    
    printf("Ingresa el valor del decimal A: ");
    scanf("%f", &floatA);
    
    printf("Ingresa el valor del caracter A: ");
    scanf(" %c", &letterA);
    
    
    printf("El entero A es: %i \n", numberA);
    printf("El decimal A es: %f \n", floatA);
    printf("El caracter A es: %c \n", letterA);
    
    return 0;
}
