#include <stdio.h>
#include <math.h>

int main()
{

    /*O custo ao consumidor de um carro novo é a soma do preço de fábrica com o
    percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça
    um programa que receba o preço de fábrica de um veículo, o percentual de lucro do
    distribuidor e o percentual de impostos, calcule e mostre:
    a) o valor correspondente ao lucro do distribuidor;
    b) o valor correspondente aos impostos;
    c) o preço final do veículo. */


    float precofabrica, perlucrodistribuidor, perlimposto, lucrodistr, valimposto, valorfinal;

    printf("Informe o valor do preco de fabrica do veiculo: > reakis < ");
    scanf("%f", &precofabrica);

    printf("\nInforme o percentual de lucro do distribuidor: ");
    scanf("%f", &perlucrodistribuidor);

    printf("\nInforme o percentual de impostos: ");
    scanf("%f", &perlimposto);

    lucrodistr = (perlucrodistribuidor/100) * precofabrica;
    printf("\nO lucro do destribuidor com base no valor de fabrica do veiculo eh: %3.2f reais\n", lucrodistr);

    valimposto = (perlimposto/100) * precofabrica;
    printf("\nO valor a ser pago pelos impostos do carro em relacao ao valor de fabrica do veiculo eh: %3.2f reais\n", valimposto);


   valorfinal = (precofabrica + perlucrodistribuidor) - perlimposto;
   printf("\nO valor final do veiculo, com o desconto de impostos eh: %3.2f reais\n", valorfinal);







    return 0;
}
