#include <stdio.h>

int main() 
{
    printf("\n Gerador de Sequencia de Fibonacci\n");
    
    int inicial = 34, final = 55, contador, variavel_qtd = 0;
    int finalizar = 1002;
    
    printf("%d %d", inicial, final);
    
    for(contador = 3; contador <= finalizar; contador++){
        variavel_qtd = inicial + final;
        printf(" %d", variavel_qtd);
        inicial = final;
        final = variavel_qtd;
    }
    
    printf("\n Encerrado contagem\n");
    return 0;
}
