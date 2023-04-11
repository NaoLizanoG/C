#include<stdio.h>

int main(int argc, char const *argv[])
{
int primo, a, i, cont; //variables
cont=0; //se declara el contador para que inicialice en 0


printf("Ingrese un numero\n");//Se pide al usuario que ingrese el numero a evaluar
scanf("%d",&primo);

//Se evalua si el numero es primo dividiendolo para los numeros naturales
for(i=1; i<=primo; i++);{
 printf ("%d i\n",i);
 if((a=primo % i)==0){
    cont=cont+1;
    printf ("%d cont\n",cont);
 }
 
}

if (cont>=3){
    printf("%d no es primo\n", primo);
}
else {
   printf("%d si es primo\n", primo); 
}
return 0;
}