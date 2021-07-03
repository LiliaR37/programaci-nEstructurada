//
//  crearArchivo.c

#include <stdio.h>

int main()
{
    printf("Archivos! Crear un archivo \n");
    
    //Creacion de apuntador
    FILE *archivo;
    
    archivo = fopen("archivo001.dat", "w");
    
    //Condición
    if (archivo != NULL)
    {
        printf("El archivo se ha creado exitosamente. Comprueba en la carpeta que ha sido creado \n");
        
        //Cierre
        fclose(archivo);
    } else
    {
        printf("El archivo no se ha creado");
    }
    return 0;
}
