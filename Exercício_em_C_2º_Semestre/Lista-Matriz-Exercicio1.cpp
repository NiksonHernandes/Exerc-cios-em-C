#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*CRIE UM PROGRAMA QUE PREENCHA TODOS OS VETORES DE UMA MATRIZ 2X2
    E EM SEGUIDA EXBIA TODOS OS VALORES E A SOMA DE TODOS OS VALORES*/

    int mat[2][2];
    int i, j, soma = 0;

    //entrada de valores
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Informe o valor da matriz: ");
            scanf("%i", &mat[i][j]);
            soma = soma + mat[i][j];
        }
    }

    printf("\n");

    //saida de valores
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%i\t", mat[i][j]);
        }
        printf("\n\n");
    }

    //soma de tudo
    printf("A soma dos valores da matriz eh: %i\n", soma);

    return 0;
}
