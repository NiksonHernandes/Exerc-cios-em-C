#include <stdio.h>
#include <string.h>

int main()
{
    /*PREENCHA UM VETOR COM 3 NOMES E MOSTRE QUANTAS LETAS A E E TEM NOS 3 NOMES
    MOSTRAR QUANTAS A E E POSSUEM;*/

    char nome[3][50];
    int i, j, x = 0, letA = 0, letE = 0;

    for(i=0; i<3; i++)
    {

        //entrada dos nomes
        printf("Informe o numero %i: ", i+1);
        gets(nome[i]);

        //conta quantas letras foram digitadas
        x = strlen(nome[i]);
        //printf("\nTam: %i\n", x); TESTE DE NUMERO

    }

    //condiçãod e A e E
    for(i=0; i<3; i++)
    {
        for(j=0; j<x; j++)
        {

            if(nome[i][j] == 'a' || nome[i][j] == 'A' )
            {
                letA ++;
            }
            else if(nome[i][j] == 'e' || nome[i][j] == 'E')
            {
                letE ++;
            }
        }
    }


    printf("\nQuantidade de letas A: %i\n", letA);
    printf("\nQuantidade de letras E: %i\n", letE);
    printf("\nPossui %i letras A e E\n", letA + letE);


    return 0;
}
