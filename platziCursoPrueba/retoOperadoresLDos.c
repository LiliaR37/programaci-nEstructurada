/*
 Segundo Reto:
* Hacer un programa que reciba la calificación de un alumno.
* Si el alumno sacó menos de 60, imprimir que el alumno está reprobado.
* Si el alumno sacó más de 60, imprimir que el alumno está aprobado.
* Extra: Si el alumno sacó más de 90, imprimir que está aprobado y una carita feliz.
 */

#include <stdio.h>


int main() {
    int grade;
    
    printf("Para saber si aprobo o no ingresa tu calificacion: \n");
    scanf("%i", &grade);
    
    if( grade >= 90)
    {
        printf("Excelente trabajo, aprobaste! =)");
        
    }
    else if( grade >= 60)
    {
        printf("Muy bien, estas aprobado");
    }
    else {
        printf("Lo siento, estas reprobado");
    }
    
    return 0;
}
