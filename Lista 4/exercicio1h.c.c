#include <stdio.h>

int main()
{
    int quant, num = 0, num2 = 0;
    
    printf("Digite a quantidade de números a serem somados: ");
    scanf("%d", &quant);
    
    for(int i = 1; i <= quant; i++){
        printf("Digite um número: ");
        scanf("%d", &num2);
        num = num + num2;
    }
    
    printf("Soma de todos os números: %d\n", num);
    
    return 0;
}
