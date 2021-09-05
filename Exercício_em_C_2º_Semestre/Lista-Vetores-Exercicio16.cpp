#include <stdio.h>
#include <stdlib.h>

int main()
{
        /*PREENCHER UM VETOR COM OS NUMEROS 10 A 20, E DEPOIS MOSTRAR OS ELEMENTOS
        PARES DO VETOR DE TRÁS PARA FRENTE. TAMBÉM MOSTRAR OS NUMERO ÍMPARES */

        int vet[11], vet2[10], vet3[10];
        int i = 0, x = 0, cont_par = -1, cont_impar=0;
        int j = 0, y;
        int n = 0;

        //determinando de 10 ate 20
        for(i=0; i<11; i++)
        {

            vet[i] = x + 10;
            x++;

        }

        //comparação de par e impar
        for(i=0; i<11; i++)
        {
            printf("%i\n", vet[i]);

            if(vet[i]%2 == 0)
            {
                vet2[j] = vet[i];
                j++;
                cont_par++;

            }else if(vet[i]%2 != 0)
            {
                vet3[n] = vet[i];
                n++;
                cont_impar++;

            }

        }

        //invertendo os numeros pares;
        for(y=cont_par; y>=0; y--)
        {
            printf("\nos valores pares sao: %i", vet2[y]);
        }

        //numeros impares
        for(i=0; i<cont_impar; i++)
        {
            printf("\nos valores impares sao: %i", vet3[i]);
        }

        printf("\n ");

    return 0;
}
