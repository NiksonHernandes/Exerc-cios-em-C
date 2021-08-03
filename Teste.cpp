#include <stdio.h>

int main()
{
    /*Faça um programa que receba o preço unitário, a refrigeração (S para os produtos
    que necessitam de refrigeração e N para os que não necessitem) e a categoria (A - 
    alimentação; L - Limpeza e V - Vestiário) de doze produtos, e que calcule e mostre:*/
   
    float preco_unitario;
    char refrigeracao[13];
    char categoria;
    int i; 

    
    for(i = 0; i < 1; i++)
     {  
        printf("Informe a categoria(A, L ou V): ");
        scanf("%c", &categoria);
        
        printf("Informe o preço unitário: ");
        scanf("%f", &preco_unitario);
        
        //printf("Informe o tipo de refrigeração(S ou N): ");
        //scanf("%s", refrigeracao);
      
        
        
        //printf("sasas %s", categoria);
        //custo de estocagem:
        
        if(categoria =='A')
        {
            printf("preco 2 reais");
        }
        
    }
