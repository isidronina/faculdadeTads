#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    float v1, v2, resultado;
    char op[20];
    
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%s", op);
    
    if (strcmp(op, "1") == 0 || strcasecmp(op, "Soma") == 0) {
        resultado = v1 + v2;
        printf("%.1f + %.1f = %.1f\n", v1, v2, resultado);
    } else if (strcmp(op, "2") == 0 || strcasecmp(op, "Subtração") == 0 || strcasecmp(op, "Subtracao") == 0) {
        resultado = v1 - v2;
        printf("%.1f - %.1f = %.1f\n", v1, v2, resultado);
    } else if (strcmp(op, "3") == 0 || strcasecmp(op, "Multiplicação") == 0 || strcasecmp(op, "Multiplicacao") == 0) {
        resultado = v1 * v2;
        printf("%.1f * %.1f = %.1f\n", v1, v2, resultado);
    } else if (strcmp(op, "4") == 0 || strcasecmp(op, "Divisão") == 0 || strcasecmp(op, "Divisao") == 0) {
        resultado = v1 / v2;
        printf("%.1f / %.1f = %.1f\n", v1, v2, resultado);
    } else if (strcmp(op, "5") == 0 || strcasecmp(op, "Resto") == 0) {
        int r = (int)v1 % (int)v2;
        printf("%.1f mod %.1f = %.1f\n", v1, v2, (float)r);
    } else if (strcmp(op, "6") == 0 || strcasecmp(op, "Potência") == 0 || strcasecmp(op, "Potencia") == 0) {
        resultado = pow(v1, v2);
        printf("%.1f ^ %.1f = %.1f\n", v1, v2, resultado);
    } else {
        printf("Operação não suportada\n");
    }
    
    return 0;
}
