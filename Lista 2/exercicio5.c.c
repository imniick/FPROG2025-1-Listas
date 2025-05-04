#include <stdio.h>

int main(){
    
    double preco, valorPag;
    
    printf("Digite o valor do litro da gasolina: ");
    scanf("%lf", &preco);
    
    printf("Digite o valor que deseja pagar: ");
    scanf("%lf", &valorPag);
    
    printf("Total de litros: %.1f", valorPag / preco);

    return 0;
}
