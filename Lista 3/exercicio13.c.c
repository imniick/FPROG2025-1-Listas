#include <stdio.h>

int main()
{
    double GA, GB, GC;
    char resp;
    
    printf("Digite a nota do Grau A: ");
    scanf("%lf", &GA);
    
    printf("Digite a nota do Grau B: ");
    scanf("%lf", &GB);
    
    double media = (GA + GB * 2)/3;
    
    printf("Média final: %.2f\n", media);
    
    if(media >= 6){
        printf("Aluno aprovado!\n");
    }
    
    else{
        printf("\nAluno em recuperação!\n");
        printf("Qual grau você deseja substituir? ");
        scanf(" %c", &resp);
        
        if(resp == 'a' || resp == 'A'){
            printf("\nDigite a nota do Grau C: ");
            scanf("%lf", &GC);
            media = (GC + GB * 2)/3;
            
            printf("Média final: %.2f\n", media);
            
            if(media >= 6)
                printf("Aluno aprovado!\n");
                
            else
                printf("Aluno reprovado!\n");
        }
        
        else if(resp == 'b' || resp == 'B'){
            printf("Digite a nota do Grau C: ");
            scanf("%lf", &GC);
            media = (GA + GC * 2)/3;
            
            printf("Média final: %.2f\n", media);
            
            if(media >= 6)
                printf("Aluno aprovado!\n");
                
            else
                printf("Aluno reprovado!\n");
        }
        
        else
            printf("Resposta inválida!\nGrau não substituído!\n");
    }
    
    return 0;
}
