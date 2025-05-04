#include <stdio.h>

int main()
{
    int divi, ini, fim;
    
    printf("Valor do divisor: ");
    scanf("%d", &divi);
    
    printf("Início do intervalo: ");
    scanf("%d", &ini);
    
    printf("Final do intervalo: ");
    scanf("%d", &fim);
    
    for(ini; ini <= fim; ini++)
        if(ini % divi == 0)
            printf("%d ", ini);

    return 0;
}
