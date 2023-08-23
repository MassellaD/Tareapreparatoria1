#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num, n;
    system("cls");

    printf("Ingresa el numero para ver su tabla de multiplicar: ");
    scanf("%d", &num);
    printf("Tabla de multiplicar de %d:\n", num);
    for (n = 1; n <= 12; n++) {
        printf("%d x %d = %d\n", num, n, num * n);
    }

    return 0;
}
