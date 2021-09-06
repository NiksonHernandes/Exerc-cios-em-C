#include <stdio.h>

int main()
{
    /*FAÇA UM PROGRAMA QUE LÊ UMA MATRIZ 3X3, MULTIPLIQUE CADA ELEMENTO
    POR 5 E IMPRIMA O RESULTADO*/

    int mat[3][3];
    int i, j;

    //entrada dados matriz
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Valor da linha[%i] e coluna [%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\nMatriz principal:\n\n");

    for(j=0; j<3;j++)
    {
        printf("\tColuna%i", j);
    }

    //saida de dados:
    for(i=0; i<3; i++)
    {
        printf("\nLinha %i:  ", i);
        for(j=0; j<3; j++)
        {

            printf(" %i\t", mat[i][j]);
        }
        printf("\n");
    }

     printf("\nMatriz multiplicada por 5:\n\n");
    //saida de dados multiplicados por 5:
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%i\t", (mat[i][j]*5));
        }
        printf("\n");
    }



    return 0;
}
