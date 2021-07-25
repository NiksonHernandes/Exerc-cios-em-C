#include <stdio.h>

int main()
{

    /*Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse
    trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. Sabe-se que
    cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta
    está zerado.*/

    float deposito, cpmf, retirada;

    printf("Quantidade a ser depositada: ");
    scanf("%f", &deposito);

    printf("Quantas operações de retirada deseja fazer: ");
    scanf("%f", &retirada);

    cpmf = retirada * 0.0038;


    printf("SALDO ATUAL: %.3f", deposito - cpmf);






    getchar();
    return 0;
}
