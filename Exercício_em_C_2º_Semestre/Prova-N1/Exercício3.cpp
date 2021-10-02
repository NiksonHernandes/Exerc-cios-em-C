#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char nome[5][50];
int idade[5];
float salario[5] = {}, salario_aumento[5] = {};
int i = 0, j = 0;

void divide_tela(){
    printf("\n************************************************\n");
}

void entrada_dados()
{

    for(i=0; i<5;i++){

        setbuf(stdin, NULL); //LIMPA O TECLADO
        printf("Nome %i: ", i + 1);
        gets(nome[i]);

        //idade
        printf("Idade (em anos) %i: ", i + 1);
        scanf("%i", &idade[i]);

        //salario:
        printf("Salário (em reais) %i: ", i + 1);
        scanf("%f", &salario[i]);

        //% aumento:
        if((idade[i] >= 18) && (idade[i] <=27)){
            salario_aumento[i] = salario[i] * 1.15;

        }else if(idade[i] >= 28 && idade[i] <=40){
            salario_aumento[i] = salario[i] * 1.22;

        }else if(idade[i] >= 41 && idade[i] <=53){
            salario_aumento[i] = salario[i] * 1.28;

        }else if(idade[i] >53){
            salario_aumento[i] = salario[i] * 1.32;

        }else {
            printf("\nIdade insuficiente!");
        }

        printf("\n\n");
    }

}

void saida_dados()
{
    divide_tela();
    for(i=0; i<5;i++){

        printf("\nPESSOA %i:\n", i+ 1);
        printf("\nNome %i: %s", i+1, nome[i]);
        printf("\nSalário antigo %i: %.2f", i+1, salario[i]);
        printf("\nSalário novo %i: %.2f", i+1, salario_aumento[i]);

        printf("\n\n");
     }

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    entrada_dados();
    saida_dados();
    return 0;
}
