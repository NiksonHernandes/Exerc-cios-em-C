#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*CRIE UM PROGRAMA QUE RECEBA OS VALORES E FAÇA SOMA DE DUAS MATRIZES 3X3;*/
    
    int mat[2][2], mat2[2][2];
    int i, j, par = 0;
    
    //entrada de valores da MATRIZ 1
    printf("Dados da matriz 1: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Valor de [%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
            
            if(mat[i][j] < 0)
            {
                return 0;
            }
                
        }
    }
    
    //entrada de valores da MATRIZ 2
    printf("\nDados da matriz 2: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Valor de [%i][%i]: ", i, j);
            scanf("%i", &mat2[i][j]);
            
            if(mat[i][j] < 0)
            {
                return 0;
            }
                
        }
    }
 
    printf("\nMatriz 1:\n\n");
    
    //saida de valores da MATRIZ 1
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%i\t", mat[i][j]);
            
        }
        printf("\n");
    }
    
    printf("\nMatriz 2:\n\n");
    
    //saida de valores da MATRIZ 2
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%i\t", mat2[i][j]);
            
        }
        printf("\n");
    }
    
    printf("\nA soma das matrizes eh: \n\n");
    
    //saida da soma das matrizes
    for(i=0; i<2; i++)
    {
        printf("\t");
        for(j=0; j<2; j++)
        {
            printf("%i\t", mat[i][j] + mat2[i][j]);
            
        }
        printf("\n");
    }
    
    
    return 0;
}
