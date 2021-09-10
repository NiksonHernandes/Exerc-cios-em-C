#include <stdio.h>

int main()
{
    int *p;
    int c = 10;
    int d = 20;
    
    p = &c;//armazena o endereço da variável c;
    
    printf("Este é o valor de C: %i\n", c);
    printf("Este é o endereço de memória de C: %i\n", &c);
    
    printf("Este é o valor de p: %i\n",p);
    printf("Conteúdo de p: %i\n", *p);
    printf("Este é o endereço de memória de p: %i\n", &p);
    
    //printf("soma: %i", p + d); - vai somar o endereço armazenado em p com o valor de d;
    
    printf("soma: %i", *p + d); // vai somar o conteúdo de p com d;
    
    
    
    
    
    /*int *p;  // p é um ponteiro para um inteiro
    int *q; 
    int c;
    
    int a =10;
    int b =20;
    
    
    p = &a;  // o valor de p é o endereço de a
    q = &b;  // q aponta para b
    c = *p + *q;
    
    printf("%i", c);*/
    
   /*int a;
  int b;
  int c;
  int *ptr;  // declara um ponteiro para um inteiro
             // um ponteiro para uma variável do tipo inteiro
  a = 90;
  b = 2;
  c = 3;
  ptr = &a;
  
  printf("Valor de ptr: %i, Conteúdo de ptr: %i\n", ptr, *ptr);
  printf("B: %i, C: %i", b, c);*/
    
  
  
    
    return 0;
}

