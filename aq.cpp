#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    /*char nome[30];
    int i;


    printf("Digite o seu nome: ");
    gets(nome);


    if(isalpha(nome[i])){

        for(i=0; nome[i] != '\0'; i++)
            printf("\nCaractere %i: Letra: %c", i, nome[i]);
    }else {
        printf("Insira um caraceter!!");}*/
 

    /* Faça um programa que receba o preço unitário, a refrigeração (S para os produtos
    que integra de refrigeração e N para os que não necessitem) e a categoria (A - 
    alimentação; L - Limpeza e V - Vestiário) de doze produtos, e que calcule e mostre: */
   
    float preco_unitario;
    char categoria;
    int i;

    
        system("color 2");
      
      
		
		printf("Informe a categoria (A, L ou V): ");
        scanf("%c", &categoria);
        
		printf("\nCategoria: %c", categoria);
		
		printf("\nInforme o Preco unitario: ");
		scanf("%f", &preco_unitario);
		
		if(preco_unitario >=10  && categoria == 'a'){
			
			printf("\n categoria igual a 'a'");
		}
        
        
     
	



    return 0;
}
