#include <stdio.h>

int main() {
    float ganhos, gastos;
    
    printf("Digite o total de ganhos: ");
    scanf("%f", &ganhos);
    
    printf("Digite o total de gastos: ");
    scanf("%f", &gastos);
    
    if (ganhos >= gastos) {
        printf("Você está dentro do orçamento!\n");
    } else {
        printf("Você está fora do orçamento! Não gaste mais!\n");
    }
    
    return 0;
}
