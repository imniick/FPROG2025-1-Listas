#include <stdio.h>
#include <ctype.h>

int main()
{
    int quant;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quant);
    
    for(int i = 1; i <= quant; i++){
        double GA, GB, GC;
        char resp;
        
        printf("\nAluno %d\n\n", i);
        
        printf("Digite a nota do Grau A: ");
        scanf("%lf", &GA);
        
        printf("Digite a nota do Grau B: ");
        scanf("%lf", &GB);
        
        double media = (GA + GB * 2)/3;
        
        if(media >= 6){
            printf("\nAPROVADO!\n");
        }
        
        else{
            printf("\nQual grau você deseja substituir? ");
            scanf(" %c", &resp);
            
            if(resp == 'a' || resp == 'A'){
                printf("\nDigite a nota do Grau C: ");
                scanf("%lf", &GC);
                media = (GC + GB * 2)/3;
                
                if(media >= 6)
                    printf("\nAPROVADO!\n");
                    
                else
                    printf("\nREPROVADO!\n");
            }
            
            else if(resp == 'b' || resp == 'B'){
                printf("Digite a nota do Grau C: ");
                scanf("%lf", &GC);
                media = (GA + GC * 2)/3;
                
                if(media >= 6)
                    printf("\nAPROVADO!\n");
                    
                else
                    printf("\nREPROVADO!\n");
            }
            
            else
                printf("\nResposta inválida!\nGrau não substituído!\n");
        }
    }
   
    return 0;
}
