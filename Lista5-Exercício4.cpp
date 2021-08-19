#include <stdio.h>
#include <stdlib.h>



int main()
{
    //Criar 2 vetores com 8 elementos, preencher o primeiro com valores,
    //a seguir, preencha o 2º com os valores do primeiro em ordem inversa. 
    
    int i, vet1[8], vet2[8], n=8;
    
    for(i=0; i<n; i++)
    {
        printf("Digite um valor: ");
        scanf("%i", &vet1[i]);
       
    }
    
    //segundo vetore
    for(i=0; i<n; i++)
    {
        vet2[i] = vet1[n-i-1];
        printf("Valores vet 2 [%i]: %i\n", i, vet2[i]);
    }
    
    return 0;
}
