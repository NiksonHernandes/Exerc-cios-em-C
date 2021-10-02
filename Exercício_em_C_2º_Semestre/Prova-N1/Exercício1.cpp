#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

    char nome[5][30];
    float notas[4][4], media, media_pond;
    char letra;
    int i, j;
    char cont, rep;

void entrada_dados()
{

    for(i=0; i<5; i++)
    {
        printf("Digite o nome do aluno %i: ", i+1);
        scanf("%s", &nome[i]);
        setbuf(stdin, NULL); //LIMPA O TECLADO
        printf("\n");

        for(j=0; j<4; j++)
        {
            printf("Digite a nota %i: ", j+1);
            scanf("%f", &notas[i][j]);

        }
         printf("\n");
    }
}

//calcula as medias
void calcula_medias(int x)
{
        setbuf(stdin, NULL); //LIMPA O TECLADO
        printf("\nQual operacao deseja realizar? (A ou P): ");
        scanf("%c", &letra);

        //media
        if(letra == 'a' || letra == 'A'){

            for(j=0; j<4; j++){
                printf("\nNOtas: %.2f", notas[x -1][j]);

            }
            media = notas[x-1][0] + notas[x-1][1] + notas[x-1][2] + notas[x-1][3];
            printf("\nMedia: %.2f", media/4 );

        //media ponderada
        }else if(letra == 'p' || letra == 'P'){

            media_pond = ((4*notas[x-1][0]) + (3*notas[x-1][1])  + (2*notas[x-1][2]) + (notas[x-1][3]));
            printf("\nMedia ponderada: %.2f", media_pond / 10);
        }

}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    do{

        int escolhe_aluno;
        entrada_dados();

        do{

            setlocale(LC_ALL, "Portuguese");
            printf("\nQual aluno: ");
            scanf("%i", &escolhe_aluno);

            setbuf(stdin, NULL); //LIMPA O TECLADO
            if(escolhe_aluno == 1){
                calcula_medias(escolhe_aluno);

            }else if(escolhe_aluno == 2){
                calcula_medias(escolhe_aluno);

            }else if(escolhe_aluno == 3){
                calcula_medias(escolhe_aluno);

            }else if(escolhe_aluno == 4){
                calcula_medias(escolhe_aluno);

            }else if(escolhe_aluno == 5){
                calcula_medias(escolhe_aluno);
            }

            setbuf(stdin, NULL); //LIMPA O TECLADO
            printf("\n \nDeseja realizar outra operação? (S/N): ");
            scanf("%c", &cont);

        }while(cont == 's' || cont == 'S');

        setbuf(stdin, NULL); //LIMPA O TECLADO
        printf("\nDeseja repetir o programa? (S/N): ");
        scanf("%c", &rep);

        system("cls");

    }while(rep == 's' || rep == 'S');

    return 0;
}

