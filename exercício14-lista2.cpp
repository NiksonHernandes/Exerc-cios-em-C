#include <stdio.h>
#include <math.h>

int main()
{
    /*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual,
    calcule e mostre:
    a) a idade dessa pessoa;
    b) quantos anos ela terá em 2050.*/

    int anodenascimento, anoatual, idade, idadeem2050;

    printf("Digite o ano do seu nascimento: ");
    scanf("%i", &anodenascimento);

    printf("\nDigite o ano atual: ");
    scanf("%i", &anoatual);

    idade = anodenascimento - anoatual;
    printf("\nSua idade eh: %i de idade", abs(idade));

    //idadeem2050 = anodenascimento - 2050;
    printf("\nSua idade em 2050 sera: %i de idade\n", abs(2050 - anodenascimento));




    return 0;





}
