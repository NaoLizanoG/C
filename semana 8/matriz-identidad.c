# include<stdio.h>

int main (){
int filas, columnas;
printf("Ingrese el numero de filas de la matriz\n");
scanf("%d", &filas);
printf("Ingrese el numero de columnas de la matriz\n");
scanf("%d", &columnas);
int A[filas][columnas];

for (int i = 0; i < filas; i++)
{
    for (int j = 0; j < columnas; j++)
    {
        A[i][j]=0;
        printf("Posicion %d %d: %d \n", i+1, j+1, A[i][j] );
}
    }
    

}