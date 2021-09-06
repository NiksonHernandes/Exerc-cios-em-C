#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*RECEBA E FAÇA A SOMA DOS ELEMENTOS PARES DA MATRIZ E ESCREVA O RESULTADO NA TELA*/
    
    int mat[3][3];
    int i, j, par = 0;
    
    //entrada de valores da MATRIZ
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Valor de [%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
            
            if(mat[i][j]%2 == 0)
            {
                par = par + mat[i][j];    
                
            }
            
            if(mat[i][j] < 0)
            {
                return 0;
            }
                
        }
    }
 
    printf("\nMatriz principal\n\n");
    
    //saida de valores da MATRIZ
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%i\t", mat[i][j]);
            
        }
        printf("\n");
    }
    
    //saida dos pares
    printf("\nA soma dos valores pares eh: %i", par);
    
    return 0;
}
