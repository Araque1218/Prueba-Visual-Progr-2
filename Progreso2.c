#include <stdio.h>

#define NUM_ALUMNOS 23
#define NUM_PROGRESOS 3

// Aquí se obtiene el promedio de un alumno durante el semestre
float calcularPromedioAlumno(float calificaciones[NUM_PROGRESOS]) {
    float sum = 0;
    int i;
    for (i = 0; i < NUM_PROGRESOS; i++) {
        sum += calificaciones[i];
    }
    return sum / NUM_PROGRESOS;
}

// Función para obtener el promedio del grupo de estudiantes para cada progreso
void calcularPromedioGrupo(float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS], float promedios[NUM_PROGRESOS]) {
    int i, j;
    for (i = 0; i < NUM_PROGRESOS; i++) {
        float sum = 0;
        for (j = 0; j < NUM_ALUMNOS; j++) {
            sum += calificaciones[j][i];
        }
        promedios[i] = sum / NUM_ALUMNOS;
    }
}
