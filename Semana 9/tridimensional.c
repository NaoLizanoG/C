# include<stdio.h>

int main (){
int matrices, filas, columnas;
printf("Ingrese el numero de matrices:");
scanf("%d", &matrices);
printf("Ingrese el numero de filas:");
scanf("%d", &filas);
printf("Ingrese el numero de columnas:");
scanf("%d", &columnas);
int A[matrices][filas][columnas];

for (int i = 0; i < matrices; i++)
{
    for (int j = 0; j < filas; j++)
    {
        for (int k = 0; k < columnas; k++)
        {
            A[i][j][k]=0;
            printf("%d", A[i][j][k]);
        }
        
    }
    printf("\n");
    
}

    

}