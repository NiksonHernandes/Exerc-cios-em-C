#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*CRIE UM PROGRAAMA QUE RECEBA VALORES INTEIROS DO USUÁRIO PARA PREENCHER
    UMA MATRIZ 4x4,E EM SEGUIDA, EXIBA A SOMA DOS VALORES DELA E A SOMA DOS VALORES DA
    PRIMEIRA DIAGONAL, OU SEJA, DIAGONAL PRINCIPAL*/

    int mat[4][4];
    int i, j, soma;

    //recebendo dados de entrada
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {

            printf("Informe o valor da matriz: ");
            scanf("%i", &mat[i][j]);

        }
    }

    printf("\nMatriz principal:\n\n");

    //saida de valoresd a matriz
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%i\t", mat[i][j]);

        }
        printf("\n");
    }

    printf("\nDiagonal principal:\n\n");

    //soma diagonal principa
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {

            if(i == j)
            {
                printf("%i\t", mat[i][j]);
                soma = soma + mat[i][j];

            }else
            {
                printf("-\t");
            }

        }

        printf("\n");
    }

    printf("\nSoma da diagonal principal: %i\n", soma);

    return 0;
}
