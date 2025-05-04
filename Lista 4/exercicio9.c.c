#include <stdio.h>

int main()
{
    int num;
    char carac;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("Escolha um caractere: ");
    scanf(" %c", &carac);
    
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++)
            printf("%c ", carac);
            printf("\n");
    }

    return 0;
}