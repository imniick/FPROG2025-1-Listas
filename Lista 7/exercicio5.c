#include <stdio.h>

double somar(double a, double b){
    
    return a + b;
}

double subtrair(double a, double b){
    
    return a - b;
}

double multiplicar(double a, double b){
    
    return a * b;
}

double dividir(double a, double b){
    
    return a / b;
}

int main()
{
    int escolha;
    double a, b;
    
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4- Divisão\n\n");
    printf("Escolha o tipo de operação matemática: ");
    scanf("%d", &escolha);
    
    if(escolha >= 1 && escolha <= 4){
        printf("Informe o primeiro valor: ");
        scanf("%lf", &a);
        printf("Informe o segundo valor: ");
        scanf("%lf", &b);
    
        switch(escolha){
        
            case 1:
                printf("%.1f + %.1f = %.1f\n", a, b, somar(a, b));
                break;
    
            case 2:
                printf("%.1f - %.1f = %.1f\n", a, b, subtrair(a, b));
                break;
            
            case 3:
                printf("%.1f * %.1f = %.1f\n", a, b, multiplicar(a, b));
                break;
        
            case 4:
                if(b != 0){
                    printf("%.1f / %.1f = %.1f\n", a, b, dividir(a, b));
                    break;
                }
                else
                    printf("Não foi possível realizar a divisão!\n");
        }
    }
    
    else
        printf("Opção inválida!");

    return 0;
}