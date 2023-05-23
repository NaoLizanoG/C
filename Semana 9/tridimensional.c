# include<stdio.h>

int main (){
    //Se definene variables
int matrices, filas, columnas;

//Se pide que el usuario ingrese el tamaño de la matriz
printf("Ingrese el numero de matrices:");
scanf("%d", &matrices);
printf("Ingrese el numero de filas:");
scanf("%d", &filas);
printf("Ingrese el numero de columnas:");
scanf("%d", &columnas);
printf ("\n");
int A[matrices][filas][columnas];

//Se inicializa la matriz 
for (int i = 0; i < matrices; i++)
{
    printf("La matriz %d es:\n", i+1);
    for (int j = 0; j < filas; j++)
    {
        for (int k = 0; k < columnas; k++)
        {
            //If para inicializar en cero las primeras amtrices
            if (i+1<matrices){

                //If para formar la matriz
            if (k+1==columnas)
            {
             A[i][j][k]=0;
            printf("%d\n", A[i][j][k]);
            }
            else{
                A[i][j][k]=0;
            printf("%d", A[i][j][k]);
            }
          
        }
        //else para inicializar en 1 la ultima matriz
        else {
            //if para formar la matriz
           if (k+1==columnas)
            {
             A[i][j][k]=1;
            printf("%d\n", A[i][j][k]);
            }
            else{
                A[i][j][k]=1;
            printf("%d", A[i][j][k]);
            } 
        }
        }
        
    }
    printf("\n");
    
} 

}