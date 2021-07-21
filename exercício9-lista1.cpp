#include <stdio.h>

int main ()
{
  // Faça um programa que calcule e mostre a área de um triângulo.

    float base, altura, area;

    printf("Digite a base em metros quadrados: ");
    scanf("%f", &base);

    printf("\nDigite a altura em metros quadrados: ");
    scanf("%f",&altura);

    area = (base * altura)/2;

    printf("\nA area do triangulo eh: %.2f metros quadrado.\n", base);



    return 0;

}
