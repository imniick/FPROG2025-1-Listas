#include <stdio.h>

int main()
{
    double grauA, grauB;
    
    printf("Digite sua nota do Grau A: ");
    scanf("%lf", &grauA);
    
    printf("Digite sua nota do Grau B: ");
    scanf("%lf", &grauB);
    
    printf("Nota final: %.1f", (grauA + 2* grauB)/3);

    return 0;
}
