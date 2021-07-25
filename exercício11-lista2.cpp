#include <stdio.h>
#include <math.h>

int main()
{
    /*Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
    a) o número digitado ao quadrado;
    b) o número digitado ao cubo;
    c) a raiz quadrada do número digitado;
    d) a raiz cúbica do número digitado.*/

    int num1, quadrado, cubo;
    float raizquadrada, raizcubica;

    printf("Digite um numero positivo e diferente de zero: ");
    scanf("%i", &num1);

    if(num1 > 0){

        quadrado = pow (num1, 2);
        cubo = pow (num1, 3);
        raizquadrada = sqrt (num1);
        raizcubica = cbrt (num1);

        printf("\nO quadrado eh: %i\n", quadrado);//a
        printf("\nO cubo eh: %i\n", cubo);//b
        printf("\nA raiz quadrada eh (aproximadamente): %.3f\n", raizquadrada);//c
        printf("\nA raiz cubica eh (aproximadamente): %.3f\n", raizcubica);//d

    } else {

        printf("\nValor invalido, tente novamente :( \n");

    }


    return 0;
}
