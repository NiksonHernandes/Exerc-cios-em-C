#include <stdio.h>

/*
void troca(int *p, int *q)
{
    int soma;
    
    printf("Soma é: %i", *p + *q);
    
}


int main()
{
    
    int i = 10, j = 20;
    int *p, *q;
    
    p = &i;
    q = &j;
    
    troca(p, q);
    
    return 0;
}*/

//ASSIM SERVE TMB

void troca(int p, int q)
{
    int soma;
    
    printf("Soma é: %i", p + q);
    
}

int main()
{
    
    int i = 10, j = 20;
    int *p, *q;
    
    p = &i;
    q = &j;
    
    troca(*p, *q);
    
    return 0;
}
