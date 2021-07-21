#include <stdio.h>
#include <math.h>

int main()
{
    /*FAÇA UM PROGRAMA QUE RECEBA O SALÁRIO DE UM FUNCIONÁRIO, CALCULE E MOSTRE SUA SALÁRIO A RECEBER,
    SABENDO-SE QUE O FUNCIONÁRIO TEM GRATIFICAÇÃO DE R$50 E PAGA IMPOSTO DE 10% SOBRE O SALÁRIO BASE.*/

    float salarioatual, salarioareceber, salarioimposto;

    printf("Digite seu salario atual: ");
    scanf("%f", &salarioatual);

    salarioimposto = ((0.1 * salarioatual));
    printf("\nValor com desconto de 10%% de imposto sobre o salario base: %3.2f reais\n", abs (salarioimposto));

    salarioareceber = (salarioatual + 50)- salarioimposto;
    printf("\nSalario a receber, acrescimo de R$50 e desconto do imposto: %3.2f reais\n", salarioareceber);

    return 0;

}
