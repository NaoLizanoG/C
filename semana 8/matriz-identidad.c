# include<stdio.h>

int main (){
int filas, columnas, cont;
cont=0;
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
        if (cont==columnas)
        {
         printf("\n %d ", A[i][j] );
         cont=0;
        }
        else{
           printf(" %d ", A[i][j] ); 
        }
        
        cont=cont+1;
       
}
    }
    

    printf("\n La matriz con una diagonal de unos es:\n");
for (int i = 0; i < filas; i++)
{
    for (int j = 0; j < columnas; j++)
    {
        if (i==j)
        {
             A[i][j]=1;
             if (cont==columnas)
        {
         printf("\n %d ", A[i][j] );
         cont=0;
        }
        else{
           printf(" %d ", A[i][j] ); 
        }
        
        cont=cont+1;
        }
        else{
        A[i][j]=0;
       if (cont==columnas)
        {
         printf("\n %d ", A[i][j] );
         cont=0;
        }
        else{
           printf(" %d ", A[i][j] ); 
        }
        
        cont=cont+1;
        }
}
    }

}