#include <stdio.h>
#include <string.h>

int main() {
    char curso[10], isento[10];
    float desconto, valor = 0, valor_final;
    
    scanf("%s", curso);
    scanf("%s", isento);
    scanf("%f", &desconto);
    
    if (strcmp(curso, "SI") == 0) {
        valor = 900.00;
    } else if (strcmp(curso, "ADS") == 0) {
        valor = 750.00;
    } else if (strcmp(curso, "CS") == 0) {
        valor = 1150.00;
    } else if (strcmp(curso, "EC") == 0) {
        valor = 1300.00;
    } else if (strcmp(curso, "ES") == 0) {
        valor = 950.00;
    } else {
        printf("Curso não encontrado\n");
        return 0;
    }
    
    if (strcmp(isento, "Sim") == 0) {
        valor_final = 0;
    } else {
        valor_final = valor - (valor * (desconto / 100.0));
    }
    
    printf("Valor da mensalidade: R$ %.2f\n", valor_final);
    
    return 0;
}
