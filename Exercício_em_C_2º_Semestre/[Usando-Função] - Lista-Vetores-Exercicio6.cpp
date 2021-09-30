#include <stdio.h>
#include <string.h>
    
    /*PEÇA 2 VETORES COM 5 POSIÇÕES. MOSTRE OS NÚMEROS E SOME OS QUE PERTENCEM A MESMA
    POSIÇÃO, OU SEJA, [0] + [0], [1] + [1]*/
    
    int vet1[3], vet2[3];
    int i, soma = 0;

void saida_vet1();
void saida_vet2();

void info_vet()
{
    //entrada de dados vetor 1
    for(i=0; i<3; i++)
    {
        printf("Valores do vetor 1: ");
        scanf("%i", &vet1[i]);
        
    }
    
    saida_vet1();
    
    //entrada de dados do vetor 2
    for(i=0; i<3; i++)
    {
        printf("Valores do vetor 2: ");
        scanf("%i", &vet2[i]);
        
    }
    
    saida_vet2();
}

void saida_vet1()
{
     for(i=0; i<3; i++)
    {
        printf("\nValor de vet 1 na posição [%i]: %i", i, vet1[i]);
       
    }
    printf("\n\n");
}

void saida_vet2()
{
     for(i=0; i<3; i++)
    {
        printf("\nValor de vet 2 na posição [%i]: %i", i, vet2[i]);
       
    }
    printf("\n\n");
}

void soma_posi()
{
    for(i=0; i<3; i++)
    {
        soma = vet1[i] + vet2[i];
        printf("\nA soma entre a posição [%i](vetor1) e a posição [%i](vetor2) é: %i ", i, i, soma);
    }
}


int main()
{
    
    info_vet();
    soma_posi();

    return 0;
}
