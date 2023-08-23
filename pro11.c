#include <stdio.h>

void dupli(int arr[], int *n) {
    for (int i = 0; i < *n; i++) {
        for (int j = i + 1; j < *n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < *n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*n)--;
                j--;
            }
        }
    }
}

int main() {
    int numeros[100]; 
    int n;

    printf("Ingresa la cantidad de numeros: ");
    scanf("%d", &n);

    printf("Ingresa los numeros separados por un espacio:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    dupli(numeros, &n);

    printf("Matriz sin duplicados: [");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
        if (i < n - 1) {
            printf(", ");
             }
    }
    printf("]\n");

    return 0;
}
