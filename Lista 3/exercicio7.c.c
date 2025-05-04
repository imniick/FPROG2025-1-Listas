#include <stdio.h>

int main()
{
    double salario;
    
    printf("Informe o valor do salário: R$ ");
    scanf("%lf", &salario);
    
    double desconto = salario * 0.11;
    
    if(desconto >= 318.20){
        printf("Desconto previdenciário: R$ 318.20\n");
        printf("Printf salário com desconto aplicado: R$ %.2f\n", salario - 318.20);
    }
    
    else{
        printf("Desconto prividenciário: R$ %.2f\n", desconto);
        printf("Printf salário com desconto aplicado: R$ %.2f\n", salario - desconto);
    }
    
    return 0;
}
