//Cadena, Flores y Lizano
#include <stdio.h>

int main() {
    //variables
    int n, i, a=1;
    float sum = 0;

    //se le pide al usuario que ingrese un numero y se lo guarda en una variable
    printf("Ingrese un número entero positivo: \n");
    scanf("%d", &n);

    //se valida que el numero sea positivo
    while (n<0){
     printf("Cantidad invalida, ingrese otro número \n");
    scanf("%d", &n);    
    }
    //operacion para calcular la suma
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
