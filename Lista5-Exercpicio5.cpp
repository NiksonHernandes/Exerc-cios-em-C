#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que carregue 1 vetor de 6 elemento numé5ricos inteiros
    //calcule e imprima a quantidade de números pares e a qnt de ímpares. 
    
    int i,vet[7], pares=0, impares=0;
    
    printf("Digite 6 numeros: \n");
    printf("\n");
    
    for(i=1; i<=6; i++)
    {
        printf("Valor %i: ", i);
        scanf("%i", &vet[i]);

        if(vet[i]%2 == 0)
        {
            pares ++;
            
        }else if(vet[i]%2 != 0)
        {
            impares ++;
            
        }else
        {
            printf("\nValor inválido!");
        }
        
        
    }
    
    printf("\nQuantidade de PARES: %i", pares);
    printf("\nQuantidade de ÍMPARES: %i", impares);
    
   
    return 0;
}
