#include <stdio.h>
#include <math.h>

int main()
{
    /*Faça um programa que receba um número real, encontre e mostre:
    a) a parte inteira desse número;
    b) a parte fracionária desse número;
    c) o arredondamento desse número.*/

    float n1, partefracionada, arredondamento, fracionada;

    printf("Digite um numero: ");
    scanf ("%f", &n1);


    printf("\nA parte inteira eh: %.3f", ceil(n1) );

    partefracionada = modf(n1,&fracionada);
    printf("\nA parte fracionada eh: %.3f", fracionada );

    printf("\nO arredondamento eh: %.3f", ceil(n1));












    getchar();
    return 0;

}
