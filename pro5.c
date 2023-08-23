#include <stdio.h>
#include <stdlib.h> 

float celafah(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahacel(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int op;
    float temp;

    printf("Selecciona la conversion:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    scanf("%d", &op);
    system("cls");

    switch (op) {
        case 1:
            printf("Introduce la temperatura en grados Celsius: ");
            scanf("%f", &temp);
            printf("%.2f grados Celsius equivale a %.2f grados Fahrenheit.\n", temp, celafah(temp));
            break;
        case 2:
            printf("Introduce la temperatura en grados Fahrenheit: ");
            scanf("%f", &temp);
            printf("%.2f grados Fahrenheit equivale a %.2f grados Celsius.\n", temp, fahacel(temp));
            break;
        default:
            printf("Opcion no valida. Por favor, selecciona 1 o 2.\n");
            break;
    }

    return 0;
}
