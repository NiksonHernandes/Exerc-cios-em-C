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
 

    /* Fa�a um programa que receba o pre�o unit�rio, a refrigera��o (S para os produtos
    que integra de refrigera��o e N para os que n�o necessitem) e a categoria (A - 
    alimenta��o; L - Limpeza e V - Vesti�rio) de doze produtos, e que calcule e mostre: */
   
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
