#include <stdio.h>

int main()
{
    /*FAÇA UM PROGRAMA QUE RECEBA O VALOR DO SALARIO MINIMO, O NUMERO DE HORAS TRABALHADAS,
    O NUMERO DE DEPENDENTES DO FUNCIONARIO E A QUANTIDADE DE HORAS EXTRAS TRABALHADAS. CALCULE
    E MOSTRE O SALARIO A RECEBER DO FUNCIONARIO DE ACORDO COM AS REGRAS A SEGUIR*/
    
    int numdepend = 0, valordepend = 0, valhoraextra = 0; 
    float salminimo = 0, numhorastrab = 0, horasextra = 0, valhorastrab = 0;
    float salmes = 0, salbruto = 0, saliquido = 0; 
    float imposto =0;
    
    printf("Informe o salario minimo: ");
    scanf("%f", &salminimo);
    
    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f", &numhorastrab);
    
    printf("Informe o numero de dependentes: ");
    scanf("%i", &numdepend);
    
    printf("Informe as horas extras trabalhadas: ");
    scanf("%f", &horasextra);
    
    //valor de horas trabalhadas = 1/5 do salminimo;
    
    valhorastrab = ( 0.2 * salminimo);
    printf("\nValor horas trabalhadas: %.2f", valhorastrab);
    
    //o salario do mes é igual ao numero de hrs trabalhadas x valor da hr trab;
    
    salmes = (numhorastrab * valhorastrab);
    printf("\nSalario do mes: %.2f", salmes);
    
    //para cada dependente acrescentar R$32,00
    
    valordepend = numdepend * 32;
    printf("\nAcrescimo por dependente: %i", valordepend);
    
    //para cada hr extra, calcular o valor da hr traba + 50%;
    
    valhoraextra = horasextra * ((valhorastrab * 0.5) + valhorastrab);
    printf("\nValor da hora extra trabalhada: %i", valhoraextra);
    
    //o salario bruto = ao salario do mes + valor dos dependente + valor horas extra;
    
    salbruto = salmes + valordepend + valhoraextra;
    printf("\nSalario bruto: %.2f", salbruto);
    
    if(salbruto < 200){
        printf("\n\nIsento do imposto IRRF!");
    
    }else if(salbruto >=200 && salbruto <=500){
        imposto = (0.1 * salbruto);
        printf("\n\nImposto de 10%% sobre o salario Bruto: %.2f", imposto);
        
        
    }else {
        imposto = (0.2 * salbruto);
        printf("\n\nImposto de 20%% sobre o salario Bruto: %.2f", imposto);
    }
    
    saliquido = salbruto - imposto;
    printf("\nSalario liquido: %.2f", saliquido);
    
    //gratificação
    
    if(saliquido <= 350){
        printf("\nGraticacao de R$100,00 reais");  
        printf("\nSalario novo igual a: %.2f", saliquido + 100);
        
        
    }else {
        printf("\nGraticacao de R$50,00 reais");
        printf("\nSalario novo igual a: %.2f", saliquido + 50);

    }

    return 0;
}
