
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

int main(){
    int alumnos[6][4];
printf("El numero de alumnos de cada carrera es\n");
for (int i = 0; i < 7; i++)
{
        switch (i+1)
        {
        case 1:
            printf("Ingenieria en Software:\n");
            break;
        case 2:
            printf("Administracion:\n");
            break;
        case 3:
            printf("Economia:\n");
            break;
        case 4:
            printf("Relaciones internacionales:\n");
            break;
        case 5:
            printf("Matematicas:\n");
            break;
        case 6:
            printf("Contabilidad:\n");
            break;
        case 7:
            printf("Ingenieria industrial:\n");
            break;
        }
    for (int j = 0; j < 5; j++)
    {
        alumnos[i][j]=rand()%201;
        printf("%d", j);
        printf("periodo anual %d: %d\n",j+1, alumnos[i][j]);

    }
    
}



    return 0;
}