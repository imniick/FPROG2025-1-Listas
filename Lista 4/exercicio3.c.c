#include <stdio.h>

int main()
{
    int num;
    char resp = '\0';
    
    while(resp != 'n'){
        printf("Digite o número que deseja calcular: ");
        scanf("%d", &num);
        
        for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &resp);
        
    }

    return 0;
}
