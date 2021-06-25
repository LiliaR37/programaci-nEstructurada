/*
  Reto:
 * Hacer un programa que imprima el símbolo de # en 5 filas
 Tip: Puedes usar operadores de incremento y decremento.
 */


#include <stdio.h>

int main() {
    
    int num = 5;
    int i = 1;
    
    while (i <= num) {
        printf("#  \n");
        i++;
    }
    return 0;
}
