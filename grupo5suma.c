//Cadena, Flores y Lizano
#include <stdio.h>



int main() {
    int n, i, a=1;
    float sum = 0;

    printf("Ingrese un número entero positivo: \n");
    scanf("%d", &n);

    while (n<0){
     printf("Cantidad invalida, ingrese otro número \n");
    scanf("%d", &n);    
    }

    for(i = 1; i <= n; i++) {

        if(i%2!=0){
        sum += 1.0 / a;
        }
        else{
            sum-= 1.0/a;
        }
        a=a+2;
    }

    printf("La suma de los primeros %d términos de la serie  es: %f", n, sum);

    return 0;
}