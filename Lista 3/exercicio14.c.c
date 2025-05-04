#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a idade do dependente: ");
    scanf("%d", &idade);
    
    if(idade < 10)
        printf("Valor a pagar: %d\n", 300 + 100);
        
    if(idade >= 10 && idade <= 30)
        printf("Valor a pagar: %d\n", 300 + 220);
        
    if(idade >= 31 && idade <= 60)
        printf("Valor a pagar: %d\n", 300 + 395);
        
    if(idade > 60)
        printf("Valor a pagar: %d\n", 300 + 480);

    return 0;
}
