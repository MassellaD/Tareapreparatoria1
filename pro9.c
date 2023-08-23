#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n; 
    system("cls");
    printf("Ingresa el numero de terminos para la serie de Fibonacci a mostrar: ");
    scanf("%d", &n);

    int term1 = 0, term2 = 1; 

    printf("Serie de Fibonacci con %d terminos:\n", n);
    
    for (int i = 1; i <= n; ++i) {
        printf("%d ", term1);
        int Term3 = term1 + term2;
        term1 = term2;
        term2 = Term3;
    }

    printf("\n");

    return 0;
}
