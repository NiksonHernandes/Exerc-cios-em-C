#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    /*ARMAZENAR EM VETORES, NOMES E NOTAS PR1 E PR2 DE 6 ALUNOS. CALCULE A MÉDIA DE CADA ALUNO
    IMPRIMA APROVADO (MEDIA > 5), REPROVADO (MEDIA <=5). OBS.: 2 VETORES PARA AS NOTAS TIPO FLOAT,
    1 VETOR PARA NOMES, 1 VETOR PARA MÉDIA E 1 VETOR PARA SITUAÇÃO.*/

    char nome[7][30];
    float nota1[7], nota2[7];
    char situacao[10];
    float media[7];
    int i, j;

    //entrada de dados do vetor nome
    for(i=1; i<=7; i++)
    {
        printf("Informe o nome do aluno %i: ", i);
        gets(nome[i]);

        //nota 1;
        printf("\nInforme a nota 1 do aluno %i: ", i);
        scanf("%f", &nota1[i]);

        //nota 2;
        printf("\nInforme a nota 2 do aluno %i: ", i);
        scanf("%f", &nota2[i]);

        //media do aluno
        media[i] = (nota1[i] + nota2[i]) / 2;
        printf("\nA media do aluno %i: %.2f", i, media[i]);

        //aprovado ou reprovado
        if(media[i] > 5)
        {
            char situacao[10] = "aprovado";
            printf("\nSituacao: %s\n", situacao);

        }else if(media[i] <= 5)
        {
            char situacao[10] = "reprovado";
            printf("\nSituacao: %s\n", situacao);
        }

        printf("\n************************************\n\n");

        //limpar buffer do teclado
        setbuf(stdin, NULL);

    }

    //saida do vetor nome
     for(i=1; i<=7; i++)
    {
        printf("\nNome do Aluno %i: %s", i, nome[i]);
    }

    
    return 0;
}
