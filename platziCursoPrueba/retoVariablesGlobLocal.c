/*
 
 Primer reto:
 *Utilizando variables globales, ingresa el nombre de un alumno y su calificación.
 * En una función evalúa si el alumno ha sido aprobado o no.
 * La calificación mínima aprobatoria es 7.
 * Imprimir desde la función si el alumno aprobó.
 */
#include <stdio.h>

char name[50];
int grade;

int min = 7;

void comprobar()
{
    
    printf("Ingresa tu nombre: \n");
    gets(name);
    
    printf("Ingresa tu calificacion: \n");
    scanf("%i", &grade);
    
    if (grade >= min)
    {
        printf("El alumno %s, ha sido aprobado", name );
    }
    else {
        printf("Lo siento, no aprobaste. Intenta mejor en el siguiente examen!!");
    }
    
    
    
}

int main()
{
    printf("Resultado de Calificaciones \n");
    comprobar();
    
    
    return 0;
}
