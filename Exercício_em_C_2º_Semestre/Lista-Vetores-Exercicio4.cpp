#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*PREENCHA UM VETOR DE 8 ELEMENTOS INTEIROS, MOSTRE O VETOR E INFORME QUANTOS NUMEROS SÃO
    MAIORES DO QUE 30 E SOME ESTES NUMEROS. SOME TODOS OS NUMEROS DO VETOR.*/

    int vet[8];
    int i, maior_30 = 0, somatotal, soma_maior_30 = 0;

    for(i=0; i<8; i++)
    {
        printf("Informe o valor do vetor: ");
        scanf("%i", &vet[i]);
        somatotal = somatotal + vet[i];

        if(vet[i] > 30)
        {
            maior_30 = maior_30 + 1;
            soma_maior_30 = soma_maior_30 + vet[i];
        }
    }

    for(i=0; i<8; i++)
    {
        printf("\nValores do vetor na posicao [%i]: %i",i, vet[i]);


    }
    printf("\n\nValores maiores do que 30: %i\n", maior_30);
    printf("\nA soma dos maiores do que 30: %i\n", soma_maior_30);
    printf("\nA soma de todos os valores do vetor: %i\n", somatotal);


    return 0;
}
