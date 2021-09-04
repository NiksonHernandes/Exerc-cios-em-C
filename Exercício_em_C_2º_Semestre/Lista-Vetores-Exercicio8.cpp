#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*PREENCHA UM VETOR COM 8 ELEMENTOS INTEIROS, MOSTRE O VETOR NA HORIZONTAL COM \T,
    CALCULE A MÉDIA DO VETOR, MOSTRE QUANTOS NUMEROS SÃO MÚLTIPLOS DE 5, QUANTOS SÃO
    MAIOR QUE 10 E MENORES QUE 30 E QUAL O MAIOR NÚMERO DO VETOR.*/

    int vet[8];
    int i, j, mult5 = 0, cond = 0, maiorNum = 0;
    float media = 0;

    //entrada de dados
    for(i=0; i<8; i++)
    {
        printf("Informe o valor do vetor: ");
        scanf("%i", &vet[i]);

        //multiplo de 5;

        if((vet[i]%5) == 0)
        {
            mult5 ++;

        }

        //maior q 10 e menores q 30
        if(vet[i] > 10 && vet[i] < 30)
        {
            cond ++;
        }

        //maior numero do vetor
        if(vet[i] > maiorNum)
        {
            maiorNum = vet[i];
        }

    }


    printf("\n");

    //saída do vetor
    for(i=0; i<8; i++)
    {

        printf("Indice [%i]: %i\t",i, vet[i]);
        media = media + vet[i];

    }

    //media do vetor
    printf("\n\nMedia: %.2f", media/8);

    //multiplo de 5:
    printf("\nMultiplos de 5: %i", mult5);

    //maiores q 10 e menores q 30
    printf("\nNumeros maiores do que 10 e menores do que 30: %i", cond);

    //maior numero do vetor;
    printf("\nO maior numero do vetor eh: %i", maiorNum);

    printf("\n");

    return 0;
}
