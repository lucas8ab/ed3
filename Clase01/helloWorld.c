#include <stdio.h>

int main() {
    int num1, num2, suma;

    // Pedir al usuario que ingrese los números
    printf("Ingresa el primer número: \n");
    scanf("%d", &num1);

    printf("Ingresa el segundo número: \n");
    scanf("%d", &num2);

    // Sumar los dos números
    suma = num1 + num2;

    // Mostrar el resultado en pantalla
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    return 0;
}
