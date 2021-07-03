//
//  estructurasDeDatos.c


#include <stdio.h>

struct personalData {
    
    char name[20];
    char lastName[20];
    int age;
};


int main() {
    
    
    printf("Estructuras de Datos \n");
    
    //Creación de la variable
    struct personalData person;
    
    //Escritura de archivo
    FILE *archivo;
    archivo = fopen("DatosPersonales001.dat","wb");
    
    if (archivo != NULL) {
        /*
        //Limpiar
        fflush(stdin);
        
        
        printf("Leer datos: \n");
        printf("Ingresar nombre: \n");
        
        //almacenar los datos
        gets(person.name);
        
        printf("Ingresar apellido: \n");
        gets(person.lastName);
        
        printf("Ingresar edad: \n");
        scanf("%i", &person.age);
        
        printf("Imprimir datos: \n");
        printf("%s \n", person.name);
        printf("%s \n", person.lastName);
        printf("%i \n", person.age);
        
        
        //Escribir
        fwrite(&person,sizeof(person),1, archivo);
       
         */
        // Leer
        fread(&person,sizeof(person),1, archivo);
        printf("Imprimir los datos \n");
        printf("Nombre: %s \n",person.name);
        printf("Apellido: %s \n",person.lastName);
        printf("Edad: %i \n",person.age);
    
        
        
        //Cerrar
        fclose(archivo);
        
    }
    else{
        printf("No se ha podido crear el archivo");
    }
    
  
    
    return 0;
}
