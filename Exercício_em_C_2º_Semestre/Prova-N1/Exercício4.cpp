#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float altura, peso_ideal;
char sexo[2], cont[2];
int i, a = 0;


void entrada_dados()
{
    printf("Altura da pessoa: ");
    scanf("%f", &altura);

    setbuf(stdin, NULL); //LIMPA O TECLADO

    printf("Sexo da pessoa (M ou F): ");
    gets(sexo);

}

void continuar()
{
    setbuf(stdin, NULL); //LIMPA O TECLADO
    printf("\n \nDeseja repetir o programa (S/N): ");
    gets(cont);

}

void condicao()
{
    if(sexo[i] == 'M' || sexo[i] == 'm'){
        peso_ideal = (72.7 * altura) - 58;

    }else if(sexo[i] == 'F' || sexo[i] == 'f'){
        peso_ideal = (62.1 * altura) - 44.7;

    }else{
        printf("\nSEXO INVÁLIDO!");
        a = a + 1;
    }

}

void saida_dados()
{
    if(a == 0){
        printf("\nAltura: %.2f", altura);
        printf("\nSexo: %c", sexo);
        printf("\nPeso ideal: %.2f", peso_ideal);

    }else{}
     a=0;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    do{
        entrada_dados();
        condicao();
        saida_dados();
        continuar();

        system("cls");

    }while(cont[i] == 's' || cont[i] == 'S');

    return 0;
}
