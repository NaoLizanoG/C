
/*
En una Institución educativa se almacenan datos sobre el número de alumnos que han ingresado a sus diferentes carreras en los dos semestres anuales y en los últimos 5 años. Cada carrera tiene un numero asociado que la identifica:

1. Ingeniería de Software.

2. Administración.

3. Economía.

4. Relaciones Internacionales.

5. Matemáticas.

6. Contabilidad.

7. Ingeniería Industrial.

Escriba un programa que calcule:

a) El año en que ingresó la mayor cantidad de alumnos a la universidad.

b) La Carrera que recibió la mayor cantidad de alumnos en el último año.

c) ¿En qué año la carrera de Ingeniería de Software recibió la mayor cantidad de alumnos? */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void carreras(int i){
 switch (i + 1) {
            case 1:
                printf("\nIngenieria en Software\n");
                break;
            case 2:
                printf("\nAdministracion\n");
                break;
            case 3:
                printf("\nEconomia\n");
                break;
            case 4:
                printf("\nRelaciones internacionales\n");
                break;
            case 5:
                printf("\nMatematicas\n");
                break;
            case 6:
                printf("\nContabilidad\n");
                break;
            case 7:
                printf("\nIngenieria industrial\n");
                break;
        }
}

int main() {
    int alumnos[7][5], periodo[5]={0, 0, 0, 0, 0};  
    int estudiantes=0, num_mayor=0, carrera_mayor=0;


    srand(time(NULL)); 
    printf("El número de alumnos de cada carrera es:\n");

    for (int i = 0; i < 7; i++) {
       carreras(i);
        for (int j = 0; j < 5; j++) {
            alumnos[i][j] = rand() % 101;
            printf("Periodo anual %d: %d\n", j + 1, alumnos[i][j]);
            periodo[j]+=alumnos[i][j];
            
    }

    }
printf("\n");
      for (int j = 0; j < 5; j++)
      
  {
     if (periodo[j]>periodo[num_mayor])
            {
                num_mayor=j;
            }
 printf("total del periodo anual %d es de %d\n",j+1, periodo[j]);
  }
   printf("\nEl periodo anual con mas estudiantes fue %d\n", num_mayor+1);


for (int i = 0; i < 7; i++)
{
       if (alumnos[i][4]>alumnos[carrera_mayor][4])
       {
        carrera_mayor=i;
       }
       
  
}

printf("La carrera con mas ingresos en el ultimo periodo anual fue ");
carreras(carrera_mayor);

    return 0;
}
