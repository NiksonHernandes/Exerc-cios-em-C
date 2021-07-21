#include <stdio.h>

int main()
{
    /*FAÇA UM PROGRAMA QUE RECEBA O SALÁRIO BASE DE UM FUNCIONÁRIO, CALCULE E MOSTRE O SALÁRIO A RECEBER,
    SABENDO-SE QUE O FUNCIONÁRIO TEM GRATIFICAÇÃO DE 5% SOBRE O SALÁRIO BASE E PAGA IMPOSTO DE 7%    TAMBÉM
    SOBRE O SALÁRIO BASE.*/

    float salariobase, salarioareceber, gratificacao,imposto, salariogratificacao, salarioimposto;


    printf("Digite o salario base: ");
    scanf("%f", &salariobase);


    salariogratificacao = salariobase * 0.05;
    printf("\nGratificacao de 5%% sobre o salario base: %.2f\n", salariogratificacao);

    salarioimposto =  0.07 * salariobase ;
    printf("\nImposto de 7%% sobre o salario base: %.2f\n   ", salarioimposto);

   salarioareceber = (salariobase + salariogratificacao)-salarioimposto;
   printf("\nSalario a receber: %.2f\n", salarioareceber);

    return 0;
}

