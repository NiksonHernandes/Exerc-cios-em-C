#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,num =0;
        int maior_num = 0, menor_num = 999;
     for(i =0; i<3; i++)
     {

        printf("Digite um valor: ");
        scanf("%i", &num);

        if(num > maior_num)
        {
            maior_num = num;
        }
        if(num < menor_num)
        {
            menor_num = num;
        }

     }
        printf("\nMaior num: %i", maior_num);
        printf("\nMenor num: %i", menor_num);



    return 0;
}
