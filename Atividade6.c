#include <stdio.h>
#include <string.h>

int main() {
    char c1[20], c2[20];
    
    scanf("%s", c1);
    scanf("%s", c2);
    
    if ((strcmp(c1, "Vermelho") == 0 && strcmp(c2, "Azul") == 0) || (strcmp(c1, "Azul") == 0 && strcmp(c2, "Vermelho") == 0)) {
        printf("A combinação resulta em: Roxo\n");
    } else if ((strcmp(c1, "Vermelho") == 0 && strcmp(c2, "Amarelo") == 0) || (strcmp(c1, "Amarelo") == 0 && strcmp(c2, "Vermelho") == 0)) {
        printf("A combinação resulta em: Laranja\n");
    } else if ((strcmp(c1, "Azul") == 0 && strcmp(c2, "Amarelo") == 0) || (strcmp(c1, "Amarelo") == 0 && strcmp(c2, "Azul") == 0)) {
        printf("A combinação resulta em: Verde\n");
    } else {
        printf("Apenas cores primárias são aceitas.\n");
    }
    
    return 0;
}
