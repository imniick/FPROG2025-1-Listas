#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int resp, num, num2;
    
    for(int i = 1; resp != 0 && resp != 1; i++){
        printf("\n");
        printf("Você aposta em par ou ímpar?\n");
        printf("Par = 0\n");
        printf("Ímpar = 1\n");
        printf("Sua escolha: ");
        scanf("%d", &resp);
    }
    
    printf("\n");
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    srand(time(NULL));
    
    num2 = rand() % 6;
    
    printf("Escolha do programa: %d\n\n", num2);
    
    if((num + num2) % 2 == 0){
        printf("PAR!\n");
        
        if(resp == 0)
            printf("Parabéns, você venceu!\n");
        else
            printf("O programa venceu!\n");
    }
    
    else{
        printf("ÍMPAR!\n");
        
        if(resp == 1)
            printf("Parabéns, você venceu!\n");
        else
            printf("O programa venceu!\n");
    }

    return 0;
}
