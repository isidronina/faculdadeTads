#include <stdio.h>

int main() {
    float gramas, preco_100g, total;
  
    printf("Digite o total de gramas comprado: ");
    scanf("%f", &gramas);
    
    if (gramas <= 0) {
        printf("Peso inválido\n");
    } else {
      
        if (gramas >= 1000) {
            preco_100g = 3.00;
        } else {
            preco_100g = 3.50;
        }
        
        total = (gramas / 100.0) * preco_100g;
        
        printf("O total é R$ %.2f\n", total);
    }
    
    return 0;
}
