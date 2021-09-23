#include <stdio.h>


void operacao (int x){
        
    int valor1, valor2;
    int op;
        
    printf("\nDigite o valor 1: ");
    scanf("%i", &valor1);
        
    printf("Digite o valor 2: ");
    scanf("%i", &valor2);
        
    if(x == 1){
        op = valor1 / valor2;
        printf("A divisão entre os numeros é: %i\n", op);
            
    }else if(x == 2){
        op = valor1 + valor2;
        printf("A soma entre os numeros é: %i\n", op);
            
    }else if(x == 3){
        op = valor1 * valor2;
        printf("A multiplicação entre os numeros é: %i\n", op);
            
    }else if(x == 4){
        op = valor1 - valor2;
        printf("A subtração entre os numeros eh: %i\n", op);
    }
}
    
//limpar buffer do teclado - função
void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}
    
int main()
{
    int op, divi, soma;
    int valor1, valor2, i;
    char continuar;
    
    do{
        printf("---1 - divisão, 2 - soma, 3 - multiplicação, 4 - divisão---");
        printf("\nDigite a operação: ");
        scanf("%i", &op);
    
    
        if(op == 1){
            operacao(1);
        
        }else if(op == 2){
            operacao(2);
        
        }else if(op == 3){
            operacao(3);
       
        }else if(op == 4){
            operacao(4);
       
        }else{
            printf("operação inválida!");
            
        }
        
        flush_in();//limpar buffer
        printf("\nDeseja continuar? (s/n): ");
        scanf("%c", &continuar);
        printf("\n\n");
        
        
    }while(continuar == 's'|| continuar == 'S');
    
    printf("Até a próxima!");


    return 0;
}
