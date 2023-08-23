#include <stdio.h>

int main() {
    int numRows;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &numRows);

    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
