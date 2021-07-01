/*
 
 Primer Reto:
 Crea un arreglo de 5 filas por 6 columnas en donde:
 *Los primeros 5 elementos cada fila tengan calificaciones aprobatorias entre 6 y 10.
 * El sexto elemento de cada fila debe ser 0.
 * Calcula el promedio de los primeros 5 elementos de cada fila y asignalo al sexto elemento.
 * Imprime el promedio de cada fila de calificaciones.
 */
#include <stdio.h>

int main() {

    float grades[5][6] = {{9.5,6,7.8,7,0},
        {7.8,8.6,9.5,10,7.8,0},
        {8.8,6.7,9.4,9.7,8.9,0},
        {9.8,4.7,6.4,7.7,6.9,0},
        {9.8,7.7,8.4,6.7,7.9,0}};
    
    for (int i = 0; i<5; i++) {
        int calculo = 0;
        
        for (int j = 0; j < 5; j++) {
            //Recorrer la calificacion
            printf("Calificacion [%d][%d]: %f\n",i,j,grades[i][j]);
            //sumatoria
            calculo+= grades[i][j];
        }
        printf("\n");
        //asignar el valor a el sexto elemento y promedio
        grades[i][5] = calculo/5;
        printf("El promedio de la fila %d es %f\n",i,grades[i][5]);
    }
    
    return 0;
}
