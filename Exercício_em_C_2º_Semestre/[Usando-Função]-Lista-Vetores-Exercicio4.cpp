#include <stdio.h>
#include <stdlib.h>

    /*PREENCHA UM VETOR DE 8 ELEMENTOS INTEIROS, MOSTRE O VETOR E INFORME QUANTOS NUMEROS SÃO
    MAIORES DO QUE 30 E SOME ESTES NUMEROS. SOME TODOS OS NUMEROS DO VETOR.*/
    
    int vet[8], maior_trinta = 0, soma_maiores_trinta = 0, soma_total = 0;
    int i;

void maiores_trinta_fun();
void vetor_fun()
{
    for(i=0; i<8; i++)
    {
        printf("Informe o valor do vetor: ");
        scanf("%i", &vet[i]);
        
        if(vet[i] > 30){
            
            maiores_trinta_fun();
        }
        soma_total = vet[i] + soma_total;
    
    }
    
    //imprime
    for(i=0; i<8; i++)
    {
        printf("\nElemento no índice [%i] é: %i", i, vet[i]);
    
    }
}

void maiores_trinta_fun()
{
    maior_trinta ++;
    
}

void imprime()
{
    printf("\n\nOs números maiores do que 30 são: %i", maior_trinta);
    printf("\n\nA soma de todos os valores é: %i", soma_total);
    
}

int main()
{   
    vetor_fun();
    //maiores_trinta_fun();
    imprime();

    return 0;
}
