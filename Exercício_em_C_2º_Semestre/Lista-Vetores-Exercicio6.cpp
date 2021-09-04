#include <stdio.h>
#include <string.h>

int main()
{
    /*PEÇA 2 VETORES COM 5 POSIÇÕES. MOSTRE OS NÚMEROS E SOME OS QUE PERTENCEM A MESMA
    POSIÇÃO, OU SEJA, [0] + [0], [1] + [1]*/

    int vet1[5], vet2[5];
    int i, soma;

    for(i=0; i<5; i++)
    {
        printf("Informe os valores do vetor 1: ");
        scanf("%i", &vet1[i]);


    }

    printf("\n\n");
    for(i=0; i<5; i++)
    {
        printf("Informe os valores do vetor 2: " );
        scanf("%i", &vet2[i]);

    }

    //imprime os vetores
    printf("\n\nVALORES VETOR 1: \n");

    for(i=0; i<5; i++)
    {
        printf("\nNo indice [%i] valor eh: %i", i, vet1[i]);

    }

    printf("\n\nVALORES VETOR 2: \n");

    for(i=0; i<5; i++)
    {
        printf("\nNo indice [%i] valor eh: %i",i, vet2[i]);

    }

    for(i=0; i<5; i++)
    {

         printf("\n\nA soma entre os elementos [%i] e [%i] eh: %i\n", i, i, (vet1[i] + vet2[i]));

    }

    return 0;
}
