#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*PREENCHER UM VETOR COM OS NUMEROS PARES DO NÚMERO 2 A 20*/

    int vet[10];
    int i, x = 0;

    for(i = 0; i <10; i++)
    {
        vet[i] = x + 2;
        x = x + 2;
    }

    for(i = 0; i < 10; i++)
    {
        printf("Valores pares: %i\n", vet[i]);
    }

    return 0;
}
