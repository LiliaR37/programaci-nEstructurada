/*
 Crea un arreglo de 3 filas por 4 columnas en donde:
 * Los elementos de la primer fila sumen un total de 4.
 * Los elementos de la segunda fila sumen un total de 10.
 * Los elementos de la tercer fila sumen un total de 26.
 * Imprime las sumatorias de cada fila.
 */

#include <stdio.h>

int main(){
    printf("Reto suma de cada fila \n");
    
    int arreglo[3][4] = {{1,1,1,1}, {2,3,2,3}, {5,6,9,6}};
    int sumaA, sumaB, sumaC;
    
  
    sumaA = arreglo[0][0] + arreglo[0][1] +  arreglo[0][2] + arreglo[0][3];
    sumaB = arreglo[1][0] + arreglo[1][1] +  arreglo[1][2] + arreglo[1][3];
    sumaC = arreglo[2][0] + arreglo[2][1] +  arreglo[2][2] + arreglo[2][3];
    
    printf("Primera Fila: %i \n", sumaA);
    printf("Segunda Fila: %i \n", sumaB);
    printf("Tercera Fila: %i \n", sumaC);
    
    
    /*
     arreglo[0][0] = 1;
     arreglo[0][1] = 1;
     arreglo[0][2] = 1;
     arreglo[0][3] = 1;
     
     arreglo[1][0] = 2;
     arreglo[1][1] = 3;
     arreglo[1][2] = 2;
     arreglo[1][3] = 3;
     
     arreglo[2][0] = 5;
     arreglo[2][1] = 6;
     arreglo[2][2] = 9;
     arreglo[2][3] = 6;
     */
    
    return 0;
}
