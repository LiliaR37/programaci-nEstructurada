//
//  while.c


#include <stdio.h>
int main() {
    
    printf("Iterador while \n");
    
    
    printf("Ingrese el limite \n");
    int limit;
    scanf("%i", &limit);
    
    int i = 1;
    
    while(i <= limit){
        printf("Numero: %i \n", i);
        i++;
        
    }
    return 0;
}
