#include <stdio.h>
#include <math.h> 

int main() {
    int V1, V2, Vresultado;
    int operador;
    
    printf("Escolha o operador pelo numero:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Redto\n");
    printf("6 - Potencia\n\n");
    
    printf("Qual operador? ");
    scanf("%d", &operador);

    printf("Insira o 1° numero: ");
    scanf("%d", &V1);
    printf("Insira o 2° numero ");
    scanf("%d", &V2);


    switch (operador) {
        case 1: 
           Vresultado = V1 + V2;
            break;

        case 2:
           Vresultado = V1 - V2;
        break;

        case 3:
           Vresultado = V1 * V2;
        break;
        
        case 4:
            Vresultado = V1 / V2;
        break;
        
        case 5:
            Vresultado = V1 % V2;
        break;
        
        case 6:
            Vresultado = (int)pow((double)V1, (double)V2);
        break;
        
        default:
            printf("Operador invalido!\n");
        break;
    }

   printf("Resultdo: %d\n", Vresultado);
    return 0;
}
