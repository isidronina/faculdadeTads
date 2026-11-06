#include <stdio.h>

int main() {
    int dia;
  
    printf("Digite o numero do dia (0 a 6): ");
    scanf("%d", &dia);
    
    if (dia == 0) {
        printf("Domingo\n");
    } else if (dia == 1) {
        printf("Segunda\n");
    } else if (dia == 2) {
        printf("Terca\n");
    } else if (dia == 3) {
        printf("Quarta\n");
    } else if (dia == 4) {
        printf("Quinta\n");
    } else if (dia == 5) {
        printf("Sexta\n");
    } else if (dia == 6) {
        printf("Sábado\n");
    } else {
        printf("Dia da semana inválido\n");
    }
    
    return 0;
}
