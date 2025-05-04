#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int menor = 100, maior = 0, soma = 0; 
    
    srand(time(NULL));
    
    for(int i = 1; i <= 5; i++){
        int sorteio = rand() % (100 + 1);
        soma = soma + sorteio;
        
        if(sorteio > maior)
            maior = sorteio;
            
        if(sorteio < menor)
            menor = sorteio;
    }
    
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média dos cinco números sorteados: %d\n", soma/5);

    return 0;
}