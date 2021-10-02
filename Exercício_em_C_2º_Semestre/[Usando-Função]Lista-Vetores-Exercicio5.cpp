#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

     /*PREENCHER UM VETOR COM 3 NOMES COM 20 LETRAS CADA E IMPRIMIR OS NOMES*/
    char nome[3][20];
    int i;

void imprime_nome()
{
    for(i=0; i<3; i++)
    {
        printf("\nO nome [%i] é: %s",i, nome[i]);
    }

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    for(i=0; i<3; i++)
    {
        printf("Informe o seu nome: ");
        gets(nome[i]);
        setbuf(stdin, NULL);
    }

    imprime_nome();
    return 0;
}
