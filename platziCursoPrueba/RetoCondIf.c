
/*
 Reto:
Definir una variable cuyo valor es 5.
* En otra variable ingresar un número con la instrucción, entre el 1 y el 10.
* Si el número ingresado es igual a la variable definida (5).
* Imprimir “Adivinaste”. Si no imprimir “Ese no es, perdiste!
*/

#include <stdio.h>

int main() {
    int num = 5;
    int numIngresado;
    printf("Adivina el numero entre el 1 y el 10, que estoy pensando. Ingresa el numero: ");
    scanf("%i", &numIngresado);
    
    

    
    if(numIngresado == num){
        printf("Muy bien, Adivinaste!!");
    }
    else {
        printf("Ese no es el numero, Perdiste!");
    }
    
    
    
    return 0;
    
    
}
