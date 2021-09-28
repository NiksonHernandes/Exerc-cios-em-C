#include <stdio.h>
    //PREENCHER UM VETOR COM OS NUMEROS DE 10 A 19 E SOMAR OS VALORES USANDO FUNÇÃO.
    
    int vet[10], i, x, soma_valores;
    
void vetor()
{
    for(i = 0; i<10; i++)
    {
        vet[i] = x + 10;
        x++;
      
    }
}
    
void vetor_soma()
{
    for(i = 0; i <10; i++)
    {
      
        printf("Valor do vetor: %i\n", vet[i]);
        soma_valores = soma_valores + vet[i];
    }
    
}    
    
void soma()
{
    printf("\nA soma de tudo eh: %i\n", soma_valores);
    
}

int main()
{
    vetor();
    vetor_soma();
    soma();
    return 0;
}
