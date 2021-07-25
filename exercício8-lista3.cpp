#include <stdio.h>
#include <math.h>

int main()
{

    // Faça um programa que mostre o menu de opções a seguir, receba a opção do
    //usuário e os dados necessários para executar cada operação.
    /*Menu de opções:
    1. Somar dois números.
    2. Raiz quadrada de um número.
    Digite a opção desejada:*/

    float n1, n2;
    int op;

    printf("MENU DE OPCOES:");
    printf("\n1 - Somar dos numeros.");
    printf("\n2 - Raiz quadrada de um numero.");

    printf("\n\nDigite aqui sua opcao: ");
    scanf("%i", &op);

    switch(op){

    case 1:
        printf("\n---SOMA ENTRE DOIS NUMEROS---");
        printf("\n\nDigite um numero: ");
        scanf("%f", &n1);
        printf("Digite outro numero: ");
        scanf("%f", &n2);

        printf("\nA soma de %.1f e %.1f eh: %.1f\n", n1, n2, n1+n2);

        break;

    case 2:
        printf("\n---RAIZ QUADRADA DE UM NUMERO---");
        printf("\n\nDigite um numero: ");
        scanf("%f", &n1);

        printf("\nA raiz quadrada de %.1f eh: %.1f\n ", n1, sqrt(n1));
        break;
    default:
        printf("\nOpcao invalida!\n");

    }


    getchar ();
    return 0;
}
