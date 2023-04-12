//Cadena, Flores y Lizano
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("La suma de los primeros %d términos de la serie armónica es: %f", n, sum);

    return 0;
}