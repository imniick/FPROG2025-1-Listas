#include <stdio.h>

int main()
{
    int a;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    
    if(a >= 0)
        printf("O dobro de %d é: %d\n", a, a * 2);
        
    else
        printf("O triplo de %d é: %d\n", a, a * 3);

    return 0;
}
