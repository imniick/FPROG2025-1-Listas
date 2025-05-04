#include <stdio.h>

int main()
{
    int num, par = 0, imp = 0;
    
    for(int i = 1; i <= 10; i++){
        scanf("%d", &num);
            if(num % 2 == 0)
                par++;
            else
                imp++;
    }

    printf("Quantidade de números pares: %d\nQuantidade de números ímpares: %d\n", par, imp);

    return 0;
}
