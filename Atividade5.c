#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    int faltas;
    
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%d", &faltas);
    
    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10 || faltas < 0) {
        printf("Parâmetros inválidos\n");
    } else {
        media = (n1 + n2 + n3) / 3.0;
        printf("Média: %.1f\n", media);
        
        if (faltas > 4) {
            printf("Situação: Reprovado por Falta\n");
        } else if (media == 0) {
            printf("Situação: Desistente\n");
        } else if (media >= 8 && media <= 10) {
            printf("Situação: Aprovado com sucesso\n");
        } else if (media >= 6 && media < 8) {
            printf("Situação: Aprovado\n");
        } else if (media < 6) {
            printf("Situação: Recuperação\n");
        }
    }
    
    return 0;
}
