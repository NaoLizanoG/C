#include <stdio.h>

#include <stdbool.h>

int main()
{
    int num, sum;

do{
    printf("Ingrese un numero entero positivo\n");
    scanf("%d", &num);

} while (num<0);

    sum= num*(num+1)/2;

    printf("El resultado de la suma de Gauss es: %d\n", sum);


    return 0;


}