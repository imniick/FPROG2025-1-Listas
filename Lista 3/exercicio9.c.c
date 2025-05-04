#include <stdio.h>

int main()
{
    double valor, dolar, euro;
    int opc;
    
    printf("Informe a cotação do Dólar: ");
    scanf("%lf", &dolar);
    
    printf("Informe a cotação do Euro: ");
    scanf("%lf", &euro);
    
    printf("\nInforme a opção desejada:\n\n");
    printf("1) Converter de Real para Euro\n");
    printf("2) Converter de Real para Dólar\n");
    printf("3) Converter de Euro para Dólar\n");
    printf("4) Converter de Euro para Real\n");
    printf("5) Converter de Dólar para Euro\n");
    printf("6) Converter de Dólar para Real\n");
    scanf("%d", &opc);
    
    printf("Informe o valor que deseja converter: ");
    scanf("%lf", &valor);
    
    if(opc == 1)
        printf("R$ %.2f equivalem a € %.2f\n", valor, valor / euro);
        
    else if(opc == 2)
        printf("R$ %.2f equivalem a US$ %.2f\n", valor, valor / dolar);
        
    else if(opc == 3)
        printf("€ %.2f equivalem a US$ %.2f\n", valor, (valor * euro) / dolar);
    
    else if(opc == 4)
        printf("€ %.2f equivalem a R$ %.2f\n", valor, valor * euro);
        
    else if(opc == 5)
        printf("US$ %.2f equivalem a € %.2f\n", valor, (valor * dolar) / euro);
    
    else if(opc == 6)
        printf("US$ %.2f equivalem a R$ %.2f\n", valor, valor * dolar);
        
    else
        printf("Opção inválida!");
    

    return 0;
}
