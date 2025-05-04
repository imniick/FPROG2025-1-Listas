#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, i;
    
    srand(time(NULL));
    
    num = rand() % 10 + 1;
    
    for(int j = 1; j <= 3; j++){
        printf("Digite um número: ");
        scanf("%d", &i);
        
        if(i > num)
            printf("O número sorteado é menor que %d\n", i);
                
        else if(i < num)
            printf("O número sorteado é maior que %d\n", i);
            
        else{
            printf("O número sorteado é %d\n", i);
            break;
        }
    }

    return 0;
}