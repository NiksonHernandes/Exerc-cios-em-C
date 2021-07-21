#include <stdio.h>

int main()
{
    /*FAÇA UM PROGRAMA QUE RECEBA O VALOR DE UM DEPÓSITO E O VALOR DA TAXA DE JUROS,
    CALCULE E MOSTRE O VALOR DO RENDIMENTO E O VALOR TOTAL DEPOIS DO RENDIMENTO.*/

    float valordeposito, taxajuros, valorrendimento, valortotal;

    printf("Digite o valor a ser depositado: ");
    scanf("%f", &valordeposito);

    printf("Digite a taxa de Juros em %%: ");
    scanf("%f", &taxajuros);

    valorrendimento = (taxajuros/100) * valordeposito;
    printf("\nValor do rendimento com a taxa de juros: %3.2f reais\n", valorrendimento);

    valortotal = valordeposito + valorrendimento;
    printf("\nValor total apos o rendimento: %3.2f reais\n", valortotal);


    return 0;
}
