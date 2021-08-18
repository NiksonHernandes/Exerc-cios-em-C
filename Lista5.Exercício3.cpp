#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Criar 3 vetores com 10 posições, preencha com números os 2 primeiros,
    //a seguir, some os valores nas respectivas posições e armazene no 3º.
    
    int i, vet1[3], vet2[3], vet3[3];
    
    printf("---Informações sobre o vetor 1--- \n");
    for(i=0; i<3; i++)
    {
        printf("Digite os valores do vetor 1: ");
        scanf("%i", &vet1[i]);
        
    }
    
    printf("\n---Informações sobre o vetor 2--- \n");

    for(i=0; i<3; i++)
    {
        printf("Digite os valores do vetor 2: ");
        scanf("%i", &vet2[i]);
        
    }
    
    printf("\n---Resultados do vetor 1---");
    
    //resultados:
    for(i=0; i<3; i++)
    {
        printf("\nValores do vetor 1 - índice %i: [%i]", i, vet1[i]);
        
    }
    
    printf("\n \n---Resultados do vetor 2---");
    
    for(i=0; i<3; i++)
    {
        printf("\nValores do vetor 2 - índice %i: [%i]", i, vet2[i]);
        
    }
    
    printf("\n \nVETOR 3:");
    
    for(i=0; i<3; i++)
    {
         vet3[i] = vet1[i] + vet2[i]; // soma do vet1 e vet2;
        printf("\níndice %i, valor: [%i]",i, vet3[i]);
        
    }
    
    return 0;
}
