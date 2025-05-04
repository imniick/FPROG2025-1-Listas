#include <stdio.h>

int main()
{
    double celsius;
    
    printf("Digite quantos graus celsius está: ");
    scanf("%lf", &celsius);
    
    double fahrenheit = (celsius * 9/5) + 32;
    
    printf("Graus fahrenheit: %.1f", fahrenheit);

    return 0;
}
