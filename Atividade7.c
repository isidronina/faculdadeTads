#include <stdio.h>

int main() {
    float nota_candidato, nota_corte, nota_minima;
    
    scanf("%f", &nota_candidato);
    scanf("%f", &nota_corte);
    scanf("%f", &nota_minima);
    
    if (nota_candidato >= nota_minima) {
        printf("Situação candidato: Aprovado\n");
    } else if (nota_candidato < nota_corte) {
        printf("Situação candidato: Reprovado\n");
    } else {
        printf("Situação candidato: Lista de Espera\n");
    }
    
    return 0;
}
