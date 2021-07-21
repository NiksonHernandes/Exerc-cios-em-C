#include <stdio.h>

int main()
{
    
    //Faça um programa que receba quatro números inteiros,
    //calcula e mostre a soma desses números. 
    
    int n1, n2, n3, n4;
    int soma;
    
    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%i", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%i", &n3);
    
    printf("Digite o quarto numero: ");
    scanf("%i", &n4);
    
    soma = n1 + n2 + n3 + n4;
    
    printf("A soma de: %i + %i + %i + %i = %i", n1, n2, n3, n4, soma);
    
    
    
    getchar ();
    return 0;
}
