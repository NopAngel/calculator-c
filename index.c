#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

    printf("Bienvenido a la calculadora simple en C\n");
    printf("Por favor, ingresa el primer número: ");
    scanf("%lf", &num1);

    printf("Ingresa el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Ingresa el segundo número: ");
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: No se puede dividir entre cero.\n");
                return 1;
            }
            break;
        default:
            printf("Operador no válido. Por favor, usa +, -, *, o /.\n");
            return 1;
    }

    printf("El resultado es: %.2lf\n", resultado);
    return 0;
}
