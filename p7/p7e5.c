#include <stdio.h>

enum
{
    N_EVALUACIONES = 3,
    MAX_ALUMNOS = 20,
    MAX_CHARS = 64
};

typedef struct Alumno
{
    double notas[N_EVALUACIONES];
    char    nom[MAX_CHARS];
}   Alumno;

typedef struct LAlumnos
{
    int nelms;
    Alumno alumnos[MAX_ALUMNOS];
}   LAlumnos;

void    leer_alumno(Alumno *alumno)
{
    printf("Introduce el nombre del alumno y sus tres notas: ");
    scanf(" %63s", alumno->nom);

    for (int i = 0; i < N_EVALUACIONES; i++)
    {
        scanf(" %lg", &alumno->notas[i]);
    }
}

void    leer_alumnos(LAlumnos *lalumnos)
{
    printf("Introduce el numero de alumnos de la clase (maximo 20): ");
    scanf(" %d", &lalumnos->nelms);

    if (lalumnos->nelms > 20)
    {
        lalumnos->nelms = 20;
    }

    for (int i = 0; i < lalumnos->nelms; i++)
    {
        leer_alumno(&lalumnos->alumnos[i]);
    }
}

void    mostrar_alumnos(LAlumnos *lalumnos)
{
    printf("Alumno");
    printf("%10s%10s%10s\n", "Nota-1", "Nota-2", "Nota-3");
    for (int i = 0; i < 4; i++)
    {
        printf("----------");
    }
    printf("\n");

    for (int i = 0; i < lalumnos->nelms; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (lalumnos->alumnos[i].nom[j])
                printf("%c", lalumnos->alumnos[i].nom[j]);
            else
                printf(" ");
        }

        for (int j = 0; j < N_EVALUACIONES; j++)
        {
            if (lalumnos->alumnos[i].notas[j] >= 5)
                printf("Aprobado  ");
            else
                printf("Suspenso  ");
        }
        printf("\n");
    }


}

int main()
{
    LAlumnos lalumnos;

    leer_alumnos(&lalumnos);
    mostrar_alumnos(&lalumnos);
}
