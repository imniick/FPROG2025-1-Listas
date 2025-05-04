#include <stdio.h>

int main()
{
    char resp = '\0';
    
    while(resp != 'n'){
        int fatorialInicial, fatorial;
        
        printf("Digite um número: ");
        scanf("%d", &fatorialInicial);
        
        fatorial = fatorialInicial;
        
        for(int i = fatorial - 1; i > 0; i--)
            fatorial = fatorial * i;
        
        printf("O fatorial de %d é %d\n", fatorialInicial, fatorial);
        
        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &resp);
        
        if(resp == 'n')
            break;
    }

    return 0;
}
