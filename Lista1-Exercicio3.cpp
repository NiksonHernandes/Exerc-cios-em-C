#include <stdio.h>

int main()
{
    //FAÇA UM PROGRAMA QUE RECEBA 3 NOTAS E SEUS RESPECTIVOS PESOS, CALCULE E MOSTRE A MÉDIA PONDERADA:

    int nota1, nota2, nota3, peso1, peso2, peso3;
    float mediaponderada;

    printf("Digite a nota 1: "); scanf("%i", &nota1);
    printf("Digite o peso da nota 1: "); scanf("%i", &peso1);

    printf("\nDigite a nota 2: "); scanf("%i", &nota2);
    printf("Digite o peso da nota 2: "); scanf("%i", &peso2);

    printf("\nDigite a nota 3: "); scanf("%i", &nota3);
    printf("Digite o peso da nota 3: "); scanf("%i", &peso3);

    mediaponderada = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3))/peso1+peso2+peso3;

    printf("\nA media ponderada das notas e seus pesos eh: %3.2f\n", mediaponderada);

    return 0;



}
