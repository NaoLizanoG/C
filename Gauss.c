#include <stdio.h>

#include <stdbool.h>

int main()
{
    int num, sum, i;
    sum=0;

    printf("Ingrese el numero a evaluar\n");
    scanf("%d", &num);

    for (i=1; i<=num; i++){

        sum=sum+i;
    }

    printf("El resultado es: %d\n", sum);


    return 0;


}