#include <stdio.h>

/*void zera(int VET[10], int x) 
{
    int i;
    
    for(i=0; i < x; i++)
    {
        VET[i] = 0;
    }
    
}

void main()
{
    int vetor[10];
    int i;
    
    zera(vetor, 10);
    
    for(i=0; i<10; i++)
    {
        printf("Vetor: %i\n", vetor[i]);
    }
}*/

//ASSIM TAMBÉM SERVE]

void zera(int *VET, int x) 
{
    int i;
    
    for(i=0; i < x; i++)
    {
        printf("Valor do vetor: ");
        scanf("%i", &VET[i]);
    }
    
}

void main()
{
    int vetor[10];
    int i;
    
    zera(vetor, 10);
    
    for(i=0; i<10; i++)
    {
        printf("Vetor: %i\n", vetor[i]);
    }
}
