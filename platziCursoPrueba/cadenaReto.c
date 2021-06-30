/*
 Reto
 * Haz un programa que reciba una cadena de caracteres e imprima de regreso
 la misma cadena de forma invertida
 */

#include <stdio.h>
#include <string.h>

int main(){
    
     
     char frase[50];
     int size;
   
     
     printf("Ingresa una frase:  \n");
    
     //leer la frase
     gets(frase);
     
     //Conocer el size
     size = strlen(frase);
    
     for (int i = size; i >= 0; i--)
     {
         printf("%c", frase[i]);
     
         
     }
     
   /*
    for(int i = 100; i > 0; i--)
    {//Notemos que escribir i-- es lo mismo a escribir i = i - 1
        printf("%i \n",i);
    }
    
    printf("%s",cadena)
    */
   
  
    return 0;
}
