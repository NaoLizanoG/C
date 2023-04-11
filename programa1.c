#include<stdio.h>

int main(int argc, char const *argv[])
{
int sumando1, sumando2, suma;
printf("Ingrese el primer número a sumar\n");
scanf("%d",&sumando1);
printf("Ingrese el segundo número a sumar\n");
scanf("%d", &sumando2);
suma=sumando1+sumando2;
printf("El resultado de la suma es: %d",suma);
return 0;
}