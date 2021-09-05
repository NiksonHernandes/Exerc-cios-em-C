#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*PREENCHA UM VETOR COM 5 NUMEROS E A MEDIDA QUE FOR DIGITADO O NUMERO,
    CALCULE O CUBO, MOSTRE EM OUTRO VETOR E MOSTRE OS 2 VETORES NO FINAL*/

    int vet1[5], vet2[5];
    int i, cubo;

    //entrada dos dados do vetor
    for(i=0; i<5; i++)
    {
        printf("Informe um valor para o vetor: ");
        scanf("%i", &vet1[i]);

        //cubo do valor
        cubo = pow(vet1[i], 3);

        //adiciona o cubo ao vet2
        vet2[i] = cubo;

    }

    //saida dos dados
    printf("\nVETOR 1 - INFORMADO PELO USUARIO:\n");
    for(i=0; i<5; i++)
    {
        printf("\nIndice [%i] : %i", i, vet1[i]);

    }

    //saido do vetor2
    printf("\n\nVETOR 2 - ELEMENTOS AO CUBO:\n");
    for(i=0; i<5; i++)
    {
        printf("\nIndice [%i] : %i", i, vet2[i]);

    }

    printf("\n");
    return 0;
}
