#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//função maior numero
int func_maior_num(int *func_num, int x)
{
    int maior_num = 0;
    int i;
    for(i=0; i < x; i++ ){

        if(func_num[i] > maior_num){
            maior_num = func_num[i];
        }

    }
    return maior_num;
}

//função menor numero
int func_menor_num(int *func_num, int x)
{
    int menor_num = 9999999;
    int i;

    for(i=0; i<x; i++){
        if(func_num[i] < menor_num){
            menor_num = func_num[i];
        }

    }
    return menor_num;
}

void imprimime_dados(int maiornum, int menornum)
{
    printf("\nMaior número é: %i", maiornum);
    printf("\nMenor número é: %i\n", menornum);

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num[10];
    int i, maiornum, menornum;

    for(i=0; i<10; i++)
    {
        printf("Informe um número: ");
        scanf("%i", &num[i]);
    }

    maiornum = func_maior_num(num, 10);
    menornum = func_menor_num(num, 10);

    imprimime_dados(maiornum, menornum);

    return 0;
}
