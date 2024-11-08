/* 
 * Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para leer calificaciones de N alumnos y determinar el número de aprobados y reprobados.
 */

#include <stdio.h>

int main() {
    int alumnos, aprobados = 0, reprobados = 0;
    float calificacion;

    // Entrada de datos
    printf("Cantidad de alumnos: ");
    if (scanf("%d", &alumnos) != 1 || alumnos <= 0) {
        printf("Entrada inválida para la cantidad de alumnos.\n");
        return 1;
    }

    // Recabar calificación de cada alumno
    for (int i = 0; i < alumnos; i++) {
        printf("Calificación del alumno %d (1-100): ", i + 1);
        if (scanf("%f", &calificacion) != 1 || calificacion < 1 || calificacion > 100) {
            printf("Entrada inválida para la calificación.\n");
            return 1;
        }

        // Condicionales para contar aprobados y reprobados
        if (calificacion >= 70) {
            puts("APROBADO");
            aprobados++;
        } else {
            puts("REPROBADO");
            reprobados++;
        }
    }

    // Resultados finales
    printf("Número de aprobados: %d\n", aprobados);
    printf("Número de reprobados: %d\n", reprobados);

    return 0;
}

