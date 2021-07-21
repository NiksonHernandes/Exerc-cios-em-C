#include <stdio.h>

int main()
{
    /*FAÇA UM PROGRAMA QUE RECEBA O SALÁRIO DE UM FUNCIONÁRIO, CALCULE E MOSTRE O NOVO SALÁRIO,
    SABENDO-SE QUE SOFREU UM AUMENTO DE 25%.*/

    float salario,novosalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    novosalario = salario * 1.25;

    printf("\nO salario novo, com aumento de 25%%, eh: %3.2f\n", novosalario);

    return 0;

}
