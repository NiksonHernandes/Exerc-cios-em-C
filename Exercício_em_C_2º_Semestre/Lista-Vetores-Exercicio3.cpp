#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PREENCHER UM VETOR COM OS NUMEROS DE 10 A 19 E SOMAR OS VETORES

    int vet[10];
    int i, x  = 0, soma;

    for(i = 0; i < 10; i++)
    {
        vet[i] = x + 10;
        x ++;
    }

    for(i = 0; i < 10; i++)
    {
        printf("Valor do vetor: %i\n", vet[i]);
        soma = soma + vet[i];

    }
    //soma

    printf("\nA soma de tudo eh: %i\n", soma);

    return 0;
}
