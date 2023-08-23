#include <stdio.h>

double potencia(double base, int exponente) {
    double resultado = 1.0;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

double factorial(int n) {
    double resultado = 1.0;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

double calcularSeno(double x, int n) {
    double resultado = 0.0;
    for (int i = 0; i < n; i++) {
        int signo = (i % 2 == 0) ? 1 : -1;
        double termino = signo * potencia(x, 2 * i + 1) / factorial(2 * i + 1);
        resultado += termino;
    }
    return resultado;
}

int main() {
    double angulo;
    int terminos;

    printf("Ingrese el angulo en radianes: ");
    scanf("%lf", &angulo);

    printf("Ingrese la cantidad de terminos a utilizar en la serie: ");
    scanf("%d", &terminos);

    double seno = calcularSeno(angulo, terminos);

    printf("El seno calculado es: %lf\n", seno);

    return 0;
}
