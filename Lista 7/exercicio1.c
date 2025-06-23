#include <stdio.h>
#include <string.h>

void cumprimentar(char nome[100]){

    printf("Olá, %s!", nome);
    
}

int main()
{
    char nome[100];
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    cumprimentar(nome);
    printf("\n");
    
    return 0;
}