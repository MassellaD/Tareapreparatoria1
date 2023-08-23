#include <stdio.h>
#include <stdlib.h> 

float Cubo(float lado) {
    return lado * lado * lado;
}

float Esfera(float radio) {
    return 4.0 / 3.0 * 3.14159265359 * radio * radio * radio;
}

float PiramideTriangular(float base, float altura) {
    return 1.0 / 3.0 * base * altura;
}

float PiramideCuadrada(float base, float altura) {
    return 1.0 / 3.0 * base * base * altura;
}

int main() {
    int op;
    float lado, radio, base, altura;

    printf("Calculadora de volumenes\n");
    printf("1. Cubo\n");
    printf("2. Esfera\n");
    printf("3. Piramide de base triangular\n");
    printf("4. Piramide de base cuadrada\n");
    printf("Elija una opcion: ");
    scanf("%d", &op);
    system("cls");

    switch (op) {
        case 1:
            printf("Ingrese el lado del cubo: ");
            scanf("%f", &lado);
            printf("El volumen del cubo es: %.2f\n", Cubo(lado));
            break;

        case 2:
            printf("Ingrese el radio de la esfera: ");
            scanf("%f", &radio);
            printf("El volumen de la esfera es: %.2f\n", Esfera(radio));
            break;

        case 3:
            printf("Ingrese la base de la piramide triangular: ");
            scanf("%f", &base);
            printf("Ingrese la altura de la piramide triangular: ");
            scanf("%f", &altura);
            printf("El volumen de la piramide triangular es: %.2f\n", PiramideTriangular(base, altura));
            break;

        case 4:
            printf("Ingrese la base de la piramide cuadrada: ");
            scanf("%f", &base);
            printf("Ingrese la altura de la piramide cuadrada: ");
            scanf("%f", &altura);
            printf("El volumen de la piramide cuadrada es: %.2f\n", PiramideCuadrada(base, altura));
            break;

        default:
            printf("Opcion no valida.\n");
            break;
    }

    return 0;
}
