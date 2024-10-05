/* Orlando Urbano Trejo (Lando)
 * Fecha: 18-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: iHaciendo uso de arreglos bidimensionales, solicita la calificación de las siguientes materias:
→ Cálculo Diferencial.
→ Fundamentos de programación.
→ Química.
→ Fundamentos de investigación.
→ Matemáticas Discretas.
→ Desarrollo Sustentable.
Recuerda que cada materia tiene 5 unidades, una vez obtenida cada calificación por unidad, calcula el promedio de cada materia. Finalmente, calcula el promedio general. */

#include <stdio.h>

int main() {
	// Arreglo bidimensional donde guardamos el nombre de las materias
    char Materias[6][50] = {
        "Cálculo Diferencial",
        "Fundamentos de Programación",
        "Química",
        "Fundamentos de investigación",
        "Matemáticas Discretas",
        "Desarrollo Sustentable"
    };
    // Arreglo donde guardaremos las calificaciones donde las filas [6] son las materias y las columnas [5] son las calificaciones 
	 // que vamos a ir registrando 
    float Calificaciones[6][5];
	 // Aqui solo inicializamos el arreglo en cero, donde guardaremos el promedio de las 6 materias.
    float Promedios_Materias[6] = {0};
    float Promedio_General = 0;

	 // En este for anidado estamos guardando las calificaciones de todas las materias
    for (int i = 0; i < 6; i++) {
        printf("Calificacion %s:\n", Materias[i]);
        for (int j = 0; j < 5; j++) {
            printf("Unidad %d: ", j + 1);
            scanf("%f", &Calificaciones[i][j]);
            Promedios_Materias[i] += Calificaciones[i][j];
        }
        Promedios_Materias[i] /= 5;
        Promedio_General += Promedios_Materias[i];
        puts("");
    }

    Promedio_General /= 6;
	 // Impresion de resultados
	 printf("Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\tPromedio\n");
    for (int i = 0; i < 6; i++) {
       //printf("%s: ", materias[i]);
        for (int j = 0; j < 5; j++) {
            // Calificaciones
            printf("%.1f\t\t", Calificaciones[i][j]);
        }
        printf(" %.2f\n", Promedios_Materias[i]);
    }

    printf("\nPromedio general: %.2f\n", Promedio_General);

    return 0;
}
