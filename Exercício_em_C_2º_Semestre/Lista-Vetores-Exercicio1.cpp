#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*PREENCHER UM VETOR COM 8 NUMEROS INTEIROS, SOLICITAR UM NÚMERO DO TECLADO, PESQUISAR
    SE ESSE NÚMERO EXISTE NO VETOR. SE EXISTIR IMPRIMIR QUAL POSIÇÃO NO VETOR.*/

    int vet[8];
    int i, num_teclado, x=0;

    for(i = 0; i < 8; i++)
    {
        printf("Digite um valor para o vetor: ");
        scanf("%i", &vet[i]);

    }

    printf("\nInforme um numero: ");
    scanf("%i", &num_teclado);

    for(i = 0; i < 8; i++)
    {
        if(num_teclado == vet[i])
        {
            printf("\nO numero [%i] existe na posicao [%i]\n",vet[i], i);

        }else
        {
            x = x + 1;
        }

    }

    if(x == 8)
    {
        printf("\nEste numero nao existe no vetor\n");
    }



    return 0;
}
