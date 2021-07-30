#include <stdio.h>

int main()
{
    int i, a = 0, b = 1, auxiliar; 
    
    for(i = 0; i <8; i++)
    {
        
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
    
    
    
    return 0;
}
