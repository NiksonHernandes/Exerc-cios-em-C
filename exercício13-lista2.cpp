#include <stdio.h>
#include <math.h>

int main()
{
    /*Sabe-se que:
    pé = 12 polegadas
    1 jarda = 3 pés
    1 milha = 1,760 jarda
    Faça um programa que receba uma medida em pés, faça as conversões a seguir
    e mostre os resultados.
    a) polegadas;
    b) jardas;
    c) milhas*/

    float polegadas, jarda, milha, medidaempes;

    printf("Digite a medida em pes: ");
    scanf("%f", &medidaempes);

    polegadas = 12 * medidaempes;
    printf("\nA medida em polegas eh: %f", polegadas);

    jarda = medidaempes * 0.333 ;
    printf("\nA medida em jardas eh: %f", jarda);

    milha = medidaempes * 0.000189;
    printf("\nA medida em milhas eh: %f\n", milha);



    return 0;
}

