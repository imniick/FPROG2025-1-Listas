#include <stdio.h>

double mediaUnisinos(double grauA, double grauB){
    
    return (grauA + grauB * 2.0) / 3.0;
}

int main()
{
    double grauA, grauB;
    
    printf("Digite sua nota do Grau A: ");
    scanf("%lf", &grauA);
    
    printf("Digite sua nota do Grau B: ");
    scanf("%lf", &grauB);
    
    printf("Média final: %.1f\n", mediaUnisinos(grauA, grauB));
    
    return 0;
}
