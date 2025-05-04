#include <stdio.h>

int main()
{
    int a;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    
    if(a % 2 == 0)
        printf("%d é um número par!\n", a);
        
    else
        printf("%d é um número ímpar!\n",a);

    return 0;
}
