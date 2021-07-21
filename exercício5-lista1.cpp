#include <stdio.h>
#include <math.h>

int main()
{
    /*FAÇA UM PROGRAMA QUE RECEBA O SALÁRIO DE UM FUNCIONÁRIO E O PERCENTUAL DE AUMENTO,
    CALCULE E MOSTRE O VALOR DO AUMENTO E O NOVO SALARIO*/

    float salarioantigo, percentualdeaumento, calculopercentual, valordoaumento;

    printf("Digite o seu salario atual: ");
    scanf("%f", &salarioantigo);

    printf("\nDigite o percentual de aumento salarial: ");
    scanf("%f", &percentualdeaumento);

    calculopercentual = salarioantigo * ((percentualdeaumento/100)+1);
    printf("\nO novo salario eh: %4.2f reais\n", calculopercentual);

    valordoaumento = salarioantigo - calculopercentual;
    printf("\nO aumento salarial foi de: %3.1f reais\n", abs(valordoaumento));

    return 0;

}
