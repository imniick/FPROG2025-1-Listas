#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, pos = 0, neg = 0;
    
    srand(time(NULL));
    
    for(int i = 1; i <= 20; i++){
        num = rand() % 21 - 10;
        printf("%d - ", num);
        
        if(num > 0){
            printf("Positivo\n");
            pos++;
        }
        else if(num < 0){
            printf("Negativo\n");
            neg++;
        }
        else
            printf("Nulo\n");
        
    }
    
    printf("Quantidade de números positivos: %d\n", pos);
    printf("Quantidade de números negativos: %d\n", neg);

    return 0;
}