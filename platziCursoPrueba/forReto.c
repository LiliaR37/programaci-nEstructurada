//  Usando for, imprime la secuencia Fibonacci hasta la novena vuelta


#include <stdio.h>

int main() {
    
    printf("Secuencia Fibonacci \n");
    
    int numA = 0;
    int numB = 1;
  
    
    for(int i = 0; i< 9; i++)
    {
        numA += numB;
        numB = numA - numB;
        
        printf("%i \n", numB);
        
       
    }
}
