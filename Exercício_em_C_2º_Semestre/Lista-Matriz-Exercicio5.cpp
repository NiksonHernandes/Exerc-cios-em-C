#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*CRIE UM PROGRAMA QUE RECEBA UMA MATRIZ DE INTEIROS POSITIVOS E SUBSTITUI
    SEUS ELEMENTOS DE VALOR IMPAR POR -1 E OS PARES POR +1*/
    
    int mat[3][3];
    int i, j;
    
    //entrada de valores da MATRIZ
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Valor de [%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
            
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
            if(mat[i][j]%2 == 0)
                {
                    
                }
            

        }
        printf("\n");
    }
    
    printf("\nMatriz impar: -1, par: 1\n\n");
    
    //saida de valores da MATRIZ
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(mat[i][j]%2 == 0)
            {
                printf("%i\t", mat[i][j] = 1);    
                
            }else
            {
                printf("%i\t", mat[i][j] = -1);
            }
            

        }
        printf("\n");
    }
    

    return 0;
}
