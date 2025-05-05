#include <stdio.h>

int main()
{
    float x, a, b, c;
    
    printf("Informe o valor de x: ");
    scanf("%f", &x);
    printf("Informe o valor de a: ");
    scanf("%f", &a);
    printf("Informe o valor de b: ");
    scanf("%f", &b);
    printf("Informe o valor de c: ");
    scanf("%f", &c);
    
    float y = a * x * x + b * x + c;
    
    printf("Resultado: %.2f\n", y);

    return 0;
}
