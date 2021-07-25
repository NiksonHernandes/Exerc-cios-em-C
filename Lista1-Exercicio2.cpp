#include <stdio.h>

int main()
{
    
    //Faça um programa que receba quatro tres notas
    //calcula e mostre a media aritmetica. 
    
    float n1, n2, n3;
    float media;
    
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    
    
    media = (n1 + n2 + n3)/3;
    
    printf("A media das notas: %.1f | %.1f | %.1f eh: %.2f", n1, n2, n3, media);
    
    
    
    getchar ();
    return 0;
}
