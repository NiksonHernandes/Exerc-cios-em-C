#include <stdio.h>
#include <math.h>

int main()
{
    /*Faça um programa que receba dois números maiores que zero, calcule e mostre
    um elevado ao outro.*/

    float n1, n2, elevado;

    printf("Digite um numero maior que zero: ");
    scanf("%f", &n1);

    printf("Digite outro numero maior que zero: ");
    scanf("%f", &n2);

    if ( n1 > 0 && n2 >0){

            elevado = pow (n1,n2);
            printf("\nO resuladro eh: %.3f\n", elevado);

    } else{
        printf("\nPor favor, digite numeros maior do que zero!\n");
    }
    return 0;

}
