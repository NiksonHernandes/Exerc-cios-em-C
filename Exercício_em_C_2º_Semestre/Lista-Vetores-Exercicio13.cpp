#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //PREENCHER UM VETOR COM 6 NUMEROS E MOSTRA-LOS NA TELA;

    int vet[6];
    int i;

    for(i=0; i<6; i++)
    {
        printf("Informe um valor: ");
        scanf("%i", &vet[i]);
    }

     for(i=0; i<6; i++)
    {
        printf("\nO valor no indice [%i] eh: %i", i, vet[i]);
    }


    return 0;
}
