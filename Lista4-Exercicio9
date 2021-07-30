#include <stdio.h>

int main()
{
    //Faça um programa que receba 2 notas de 6 alunos e calcule:
    //a media aritmetica das notas de cada aluno e faça a comparação: 
    
    
    float nota1 = 0, nota2 = 0, media = 0, media_classe = 0;
    int i = 0, x =1, aprovado = 0, reprovado = 0, exame = 0;
   
    
    for(i=0; i<6; i++)
    {
        printf("\nInforme a 1ª nota do aluno %i: ", x);
        scanf("%f", &nota1);
        
        printf("Informe a 2ª nota do aluno %i: ", x);
        scanf("%f", &nota2);
        x ++; 
        
        //media individual - para a condição 
        media = (nota1 + nota2)/2;
        
        //atribuição variavel media_classe
        media_classe = media + media_classe;
       
       
        if(media <=3) //condição reprovado
        {
            printf("REPROVADO :( \n\n");
            reprovado ++;//atribuição alunos reprovados
            
        }else if(media >3 && media <7)//condição exame
        {
            printf("EXAME :/ \n\n");
            exame ++;//atribuição alunos de exame
            
        }else //condição aprovado
        {
            printf("APROVADO! :) \n\n");
            aprovado ++;//atribuição alunos aprovados
        }
    }
    
    printf("Total de alunos APROVADOS: %i\n", aprovado);
    printf("Total de alunos de EXAME: %i\n", exame);
    printf("Total de alunos REPROVADOS: %i\n", reprovado);
    printf("Media da classe: %.2f\n", media_classe / 6);
    
    
    
    getchar ();
    return 0;
}
