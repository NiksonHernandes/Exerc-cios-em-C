#include <stdio.h>
#include <stdlib.h>

void cabecario(void)//função cabeçario
{
    system("color 3");
    printf("***************************\n");
    printf("**      LINGUAGEM C      **\n");
    printf("***************************\n");
    return;
}

void rodape (void)//função rodapé
{
     printf("\n\n***************************\n");
     return;
}

int main()
{

   cabecario();

    /* Faça um programa que receba o preço unitário, a refrigeração (S para os produtos
    que integra de refrigeração e N para os que não necessitem) e a categoria (A -
    alimentação; L - Limpeza e V - Vestiário) de doze produtos, e que calcule e mostre: */

    float preco_unitario=0, imposto=0, custo_estocagem=0, preco_final=0, media=0, custo=0, imp=0;
    char categoria[15], refrigeracao[15];
    int i, barato=0, normal=0, caro=0;
    float maior_num=0.0, menor_num=999.0;

    for(i=0; i<5; i++)
    {

    //recebendo e armazenando informações
    printf("\nInforme o PRECO UNITARIO: ");
    scanf("%f", &preco_unitario);

    printf("Informe a REFRIGERACAO (S ou N): ");
    scanf("%s", &refrigeracao[i]);

    printf("Informe a CATEGORIA (A, L ou V): ");
    scanf("%s", &categoria[i]);

    //tabela de custo de estocagem
    if(preco_unitario <=20  && categoria[i] == 'A')
    {
        printf("\nCusto de estocagem 2 reais\n");
        printf("Impoosto de 2%% \n");
        custo_estocagem = custo_estocagem + 2;
        custo = 0;
        custo = custo + 2;
        imposto = imposto + (0.02*preco_unitario);
        imp = 0;
        imp = imp + (0.02*preco_unitario);

    }else if(preco_unitario <=20  && categoria[i] == 'L')
    {
        printf("\nCusto de estocage, de 3 reais");
        printf("Impoosto de 2%% \n");
        custo_estocagem = custo_estocagem + 3;
        custo = 0;
        custo = custo + 3;
        imposto = imposto + (0.02*preco_unitario);
        imp = 0;
        imp = imp + (0.02*preco_unitario);

    }else if(preco_unitario <=20  && categoria[i] == 'V')
    {
        printf("\nCusto de estocagem de 4 reais");
        printf("Imposto de 2%% \n");
        custo_estocagem = custo_estocagem +4;
        custo = 0;
        custo = custo + 4;
        imposto = imposto + (0.02*preco_unitario);
        imp = 0;
        imp = imp + (0.02*preco_unitario);

    }else if((preco_unitario >20 && preco_unitario <=50) && refrigeracao[i] == 'S')
    {
        printf("\nCusto de estocagem de 6 reais");
        printf("Impoosto de 2%% \n");
        custo_estocagem = custo_estocagem + 6;
        custo = 0;
        custo = custo + 6;
        imposto = imposto + (0.02*preco_unitario);
        imp = 0;
        imp = imp + (0.02*preco_unitario);


    }else if((preco_unitario >20 && preco_unitario <=50) && refrigeracao[i] == 'N')
    {
        printf("\nCusto de estocagem de 0 reais");
        printf("Impoosto de 2%% \n");
        custo_estocagem = custo_estocagem + 0;
        custo = 0;
        custo = custo + 0;
        imposto = imposto + (0.02*preco_unitario);
        imp = 0;
        imp = imp + (0.02*preco_unitario);

    }else if(preco_unitario >50 && refrigeracao[i] == 'S' && categoria[i] == 'A')
    {
        printf("\nCusto de estocagem de 5 reais");
        printf("Impoosto de 4%% \n");
        custo_estocagem = custo_estocagem + 5;
        custo = 0;
        custo = custo + 5;
        imposto = imposto + (0.04*preco_unitario);
        imp = 0;
        imp = imp + (0.04*preco_unitario);

    }else if(preco_unitario >50 && refrigeracao[i] == 'S' && categoria[i] == 'L')
    {
        printf("\nCusto de estocagem de 2 reais");
        printf("Impoosto de 2%%\n");
        custo_estocagem = custo_estocagem + 2;
        custo = 0;
        custo = custo + 2;
        imposto = imposto + (0.02*preco_unitario);
        imp = 0;
        imp = imp + (0.02*preco_unitario);

    }else if(preco_unitario >50 && refrigeracao[i] == 'S' && categoria[i] == 'V')
    {
        printf("\nCusto de estocagem de 4 reais");
        printf("Impoosto de 2%%\n");
        custo_estocagem = custo_estocagem + 4;
        custo = 0;
        custo = custo + 4;
        imposto = imposto + (0.02*preco_unitario);
        imp = 0;
        imp = imp + (0.02*preco_unitario);

    }else if(preco_unitario >50 && refrigeracao[i] == 'N' && (categoria[i] == 'A' || categoria[i] == 'V'))
    {
        printf("\nCusto de estocagem de 0 reais");
        printf("Impoosto de 2%%\n");
        custo_estocagem = custo_estocagem + 0;
        custo = 0;
        custo = custo + 0;
        imposto = imposto + (0.02*preco_unitario);
        imp = 0;
        imp = imp + (0.02*preco_unitario);

    }else if(preco_unitario >50 && refrigeracao[i] == 'N' && categoria[i] == 'L')
    {
        printf("\nCusto de estocagem de 1 reais");
        printf("Impoosto de 2%%\n");
        custo_estocagem = custo_estocagem + 1;
        custo = 0;
        custo = custo + 1;
        imp = 0;
        imp = imp + (0.02*preco_unitario);
        imposto = imposto + (0.02*preco_unitario);
    }


    //preço final =  preço unitário mais custo de estocagem mais imposto.
    preco_final = preco_unitario + custo +  imp;
    printf("\nPreco final: %.2f (PU) + %.2f (CE) + %.2f (IMP) = %.2f", preco_unitario, custo, imp, preco_final);

     /*O preço final, ou seja, preço unitário mais custo de estocagem mais imposto.
    A classificação calculada usando a tabela a seguir.*/
    if(preco_final <=20)
    {
        printf("\nProduto BARATO\n");
        barato = barato + 1;

    }else if(preco_final > 20 && preco_final <=100)
    {
        printf("\nProduto NORMAL\n");
        normal = normal + 1;

    }else
    {
        printf("\nProduto CARO\n");
        caro = caro + 1;
    }

    //maior e menor preço final
    if(preco_final > maior_num)
    {
        maior_num = preco_final;

    }
    if(preco_final < menor_num)
    {
        menor_num = preco_final;}

    }

    // A média dos valores adicionais, ou seja, a média dos custos de estocagem e dos impostos dos doze produtos.
    media = custo_estocagem / 5;
    printf("\nMedia do custo de estocagem dos produtos: %.2f", media);

    //Imprime menor e maior preço final.
    printf("\nMaior preco final: %.2f", maior_num);
    printf("\nMenor preco final: %.2f", menor_num);

    //total de impostos
    printf("\nTotal de impostos: %.2f", imposto);

    //quantidade de bararos, normal e caro;
    printf("\nQuantidade de baratos: %i", barato);
    printf("\nQuantidade de normal: %i", normal);
    printf("\nQuantidade de caro: %i", caro);

    rodape();
    return 0;
}
