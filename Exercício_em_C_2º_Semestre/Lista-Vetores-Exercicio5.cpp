#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*PREENCHER UM VETOR COM 3 NOMES COM 20 LETRAS CADA E IMPRIMIR OS NOMES*/

    char nome[3][20];
    int i;

    for(i=0; i<3; i++)
    {
        printf("Informe o nome %i: ", i+1);
        gets(nome[i]);

    }

    for(i=0; i<3; i++)
    {
         printf("\nO nome eh: %s\n", nome[i]);

    }


    return 0;
}
