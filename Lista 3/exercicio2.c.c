#include <stdio.h>

int main()
{
    double a, b, c;
    
    printf("Digite o primeiro valor: ");
    scanf("%lf", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%lf", &b);
    
    printf("Digite o terceiro valor: ");
    scanf("%lf", &c);
    
    if(a + b < a + c)
        printf("o resultado de %.1f + %.1f é menor que o resultado de %.1f + %.1f.\n", a, b, a, c);
        
    else
        printf("o resultado de %.1f + %.1f não é menor que o resultado de %.1f + %.1f.\n", a, b, a, c);
        

    return 0;
}
