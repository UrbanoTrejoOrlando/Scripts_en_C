/* Orlando Urbano Trejo (Lando)
 * Fecha: 18-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: Haciendo uso de arreglos bidimensionales, solicita la calificación de las siguientes materias:
   - Cálculo Diferencial
   - Fundamentos de Programación
   - Química
   - Fundamentos de Investigación
   - Matemáticas Discretas
   - Desarrollo Sustentable
   Cada materia tiene 5 unidades. Calcula el promedio de cada materia y el promedio general. */

#include <stdio.h>

int main() {
    // Arreglo con los nombres de las materias
    char Materias[6][50] = {
        "Cálculo Diferencial",
        "Fundamentos de Programación",
        "Química",
        "Fundamentos de Investigación",
        "Matemáticas Discretas",
        "Desarrollo Sustentable"
    };

    // Arreglo para almacenar las calificaciones de 6 materias con 5 unidades cada una
    float Calificaciones[6][5];
    float Promedios_Materias[6] = {0};  // Arreglo para almacenar el promedio de cada materia
    float Promedio_General = 0;  // Variable para el promedio general de todas las materias

    // Captura de calificaciones y cálculo del promedio de cada materia
    for (int i = 0; i < 6; i++) {
        printf("Calificaciones para %s:\n", Materias[i]);
        for (int j = 0; j < 5; j++) {
            printf("Unidad %d: ", j + 1);
            scanf("%f", &Calificaciones[i][j]);
            Promedios_Materias[i] += Calificaciones[i][j];
        }
        Promedios_Materias[i] /= 5;  // Calcula el promedio de la materia
        Promedio_General += Promedios_Materias[i];  // Acumula para el promedio general
        puts("");
    }

    Promedio_General /= 6;  // Calcula el promedio general

    // Impresión de resultados
    printf("Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\tPromedio\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%.1f\t\t", Calificaciones[i][j]);  // Imprime cada calificación
        }
        printf("%.2f\n", Promedios_Materias[i]);  // Imprime el promedio de cada materia
    }

    printf("\nPromedio general: %.2f\n", Promedio_General);  // Imprime el promedio general

    return 0;
}

