#include <stdio.h>

int main()
{
    double a, b;
    
    printf("Digite o dividendo: ");
    scanf("%lf", &a);
    
    printf("Digite o divisor: ");
    scanf("%lf", &b);
    
    if(b == 0)
        printf("[Erro] O divisor não pode ser 0.\n");
        
    else
        printf("O resultado de %.2f dividido por %.2f é: %.2f\n", a, b, a/b);

    return 0;
}
