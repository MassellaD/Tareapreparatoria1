#include <stdio.h>
#include <stdlib.h> 

int main() {
    system("cls");
    int n;
    printf("Cuantos numeros se operaran?: ");
    scanf("%d", &n);

    int numeros[n];
    for (int i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    char op;
    printf("Desea sumar o multiplicar los numeros? (s/m): ");
    scanf(" %c", &op);

    if (op == 's') {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += numeros[i];
        }
        printf("La suma de los numeros es: %d\n", sum);
    } else if (op == 'm') {
        int product = 1;
        for (int i = 0; i < n; i++) {
            product *= numeros[i];
        }
        printf("El resultado de la multiplicacion de los numeros es: %d\n", product);
    } else {
        printf("Opcion no valida. Por favor, ingrese 's' o 'm'.\n");
    }

    return 0;
}

