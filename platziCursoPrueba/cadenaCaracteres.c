//
//  cadenaCaracteres.c


#include <stdio.h>
#include <string.h>

int main() {
    printf("Cadena de caracteres \n");
    
    char nameC[50];
    int size;
    
    printf("Ingresar el nombre con gets: \n");
  
    //permite leer la cadena de caracteres
    gets(nameC);
    
    printf("El nombre es: ");
    //imprime la cadena
    puts(nameC);
    
    size = strlen(nameC);
    
    printf("\n El tamaño de la cadena es: %i \n", size);
    return 0;
}
