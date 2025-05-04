#include <stdio.h>

int main()
{
    int a;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    
    if(a % 3 == 0)
        printf("%d é divisível por 3!\n", a);
        
    else
        printf("%d não é divisível por 3!\n", a);

    return 0;
}
