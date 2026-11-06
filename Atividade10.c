#include <stdio.h>
#include <string.h>

int main() {
    int inteiras, meias;
    char dia[20], nacional[10];
    float total;
    
    scanf("%d", &inteiras);
    scanf("%d", &meias);
    scanf("%s", dia);
    scanf("%s", nacional);
    
    if (strcmp(nacional, "Sim") == 0) {
        total = (inteiras + meias) * 5.00;
    } else if (strcmp(dia, "Quarta-feira") == 0) {
        total = (inteiras + meias) * 14.50;
    } else {
        total = (inteiras * 28.50) + (meias * (28.50 / 2.0));
    }
    
    printf("Total à pagar: R$ %.2f\n", total);
    
    return 0;
}
