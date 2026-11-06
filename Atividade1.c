#include <stdio.h>

int main() {
    float ganhos, gastos;
    
    // Leitura dos valores de ganhos e gastos[cite: 1]
    printf("Digite o total de ganhos: ");
    scanf("%f", &ganhos);
    
    printf("Digite o total de gastos: ");
    scanf("%f", &gastos);
    
    // Verifica se os ganhos cobrem os gastos[cite: 1]
    if (ganhos >= gastos) {
        printf("Você está dentro do orçamento!\n");
    } else {
        printf("Você está fora do orçamento! Não gaste mais!\n");
    }
    
    return 0;
}
