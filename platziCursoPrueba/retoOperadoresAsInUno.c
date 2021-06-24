/*
Primer Reto:
* Crea una variable llamada x con valor 10.
* Utilizando operadores de asignación, que esta variable se sume a sí misma el doble de su valor.
* Imprime el resultado.
*/

#include <stdio.h>

int main() {

    int x = 10;
    
    (x += 2 * x);
    
    printf("El valor de X es: %i \n", x);
    
    return 0;
    
}




