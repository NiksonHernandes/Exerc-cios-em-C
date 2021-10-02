#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  
/*PREENCHER UM VETOR COM OS NUMEROS PARES DO NÚMERO 2 A 20*/

    int vet[10], i, x;

void vetor()
{
    for(i = 0; i<10; i++)
    {
        vet[i] = x + 2;
        x = x + 2;
    }
}

void exibir()
{
    for(i=0; i<10; i++)
    {
        printf("Os valores [%i] são: %i\n", i, vet[i]);
    }

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    vetor();
    exibir();

    return 0;
}
