#include <stdio.h>
#include <math.h>

int main()
{

    /*Faça um programa que receba o salário base e o tempo de serviço de um
    funcionário. Calcule e mostre:*/

    float salbase = 0, temposerv = 0, saliquido = 0, imposto = 0, gratif = 0;

    printf("Informe o salario base: ");
    scanf("%f", &salbase);

    printf("Informe tempo de servico: ");
    scanf("%f", &temposerv);

    //imposto

    if(salbase <200){
        printf("\nIsento de imposto");
        imposto = imposto + 0;

    }else if(salbase >=200 && salbase <=450){
        printf("\nImposto de 3%%");
        imposto = imposto + 0.03;

    }else if(salbase >450 && salbase <700){
        printf("\nImposto de 8%%");
        imposto = imposto + 0.08;

    }else {
        printf("\nimposto de 12%%");
        imposto = imposto + 0.12;
    }

    //gratificacao

    if(salbase >500 && temposerv <=3){
        printf("\nGratificacao de 20");
        gratif = gratif + 20;

    }else if(salbase >500 && temposerv > 3){
        printf("\nGratificacao de 30");
        gratif = gratif + 30;

    }else if(salbase <=500 && temposerv <=3){
        printf("\nGratificacao de 23");
        gratif = gratif + 23;

    }else if(salbase <=500 && (temposerv >3 && temposerv <6)){
        printf("\nGratificacao de 35");
        gratif = gratif + 35;

    }else{
        printf("\nGratificao de 33");
        gratif = gratif + 33;

    }

    // O salário líquido, ou seja, salário base menos imposto mais gratificação.

    saliquido = ((salbase) - imposto * salbase) + gratif;
    printf("\nSalario liquido: R$ %.2f reais", abs(saliquido));

    //categoraia

    if(saliquido <=350){
        printf("\nCategoria A\n");

    }else if(saliquido >350 && saliquido <600){
        printf("\nCategoria B\n");

    }else {
        printf("\nCategoria C\n");
    }

    getchar();
    return 0;
}
