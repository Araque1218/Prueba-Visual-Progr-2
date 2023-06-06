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

// Función para encontrar el alumno con el mayor promedio de calificación durante todo semestre
int encontrarMejorAlumno(float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS]) {
    float maxPromedio = 0;
    int mejorAlumno = 0;
    int i;
    for (i = 0; i < NUM_ALUMNOS; i++) {
        float promedio = calcularPromedioAlumno(calificaciones[i]);
        if (promedio > maxPromedio) {
            maxPromedio = promedio;
            mejorAlumno = i;
        }
    }
    return mejorAlumno;
}


int main() {
    // Base de datos de calificaciones
    float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS] = {
        {10, 8.5, 9},
        {9, 8, 9.5},
        {6, 8, 7},
        {10, 9, 9},
        {8, 9, 10},
        {4, 8, 7},
        {9.5, 9, 9.8},
        {7.8, 8, 8.9},
        {5.5, 6, 8},
        {2, 8, 6},
        {5, 9, 6.9},
        {4.5, 10, 9},
        {6, 8, 9,9},
        {5, 7, 9},
        {8.1, 5, 9},
        {9, 7, 7},
        {6.8, 7.5, 9},
        {5.5, 8, 9},
        {7, 5, 8},
        {4, 5, 10},
        {2, 5, 9},
        {10, 9,9, 8},
        {6, 5, 8},

