#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int idade[10];
int i = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

void entrada_dados()
{
    setbuf(stdin, NULL); //LIMPA O TECLADO

    for(i=0; i<10; i++)
    {
        printf("Informe a idade do nadador %i: ", i + 1);
        scanf("%i", &idade[i]);
    }

}

void categoria()
{

    for(i=0; i<10; i++)
    {
        if(idade[i] >=5 && idade[i] <=7){
            printf("\NADADOR %i: ", i + 1);
            printf("Categoria: Infantil A\n");
            a++;

        }else if(idade[i] >=8 && idade[i] <=10){
            printf("\NADADOR %i: ", i + 1);
            printf("Categoria: Infantil B\n");
            b++;

        }else if(idade[i] >=11 && idade[i] <=13){
            printf("\NADADOR %i: ", i + 1);
            printf("Categoria: Juvenil A\n");
            c++;

        }else if(idade[i] >=14 && idade[i] <=17){
            printf("\NADADOR %i: ", i + 1);
            printf("Categoria: Juvenil B\n");
            d++;

        }else if(idade[i] > 17){
            printf("\NADADOR %i: ", i + 1);
            printf("Categoria: Adulto\n");
            e++;

        }else{
            printf("\NADADOR %i: ", i + 1);
            printf("Idade insulficiente\n");
            f++;
        }
    }
}

void imprimime_dados()
{
    printf("\nCategoria INFANTIL A: %i", a);
    printf("\nCategoria INFANTIL B: %i", b);
    printf("\nCategoria JUVENIL A: %i", c);
    printf("\nCategoria JUVENIL B: %i", d);
    printf("\nCategoria ADULTO: %i", e);
    printf("\nSEM CATEGORIA: %i", f);

}

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int idade[10];
   int a, b, c, d, e, f;

   entrada_dados();
   printf("\n\n");
   categoria();

   imprimime_dados();

   return 0;

}
