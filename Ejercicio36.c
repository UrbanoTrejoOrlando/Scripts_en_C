/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 20-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Los alumnos de primer semestre de la carrera de Ingeniería en Sistemas Computacionales deben 
   organizarse para el desfile del 20 de noviembre. Cada alumno debe ir vestido de acuerdo con el taller 
   en el que está inscrito. Los alumnos inscritos en un taller recibirán 1 crédito. 
   Los que además participen en la carrera reciben 1 crédito extra, y si obtienen uno de los 3 primeros lugares, 
   reciben un crédito adicional. Imprime el total de créditos obtenidos. */

#include <stdio.h>

int main() {
    int taller, carrera, lugar;
    int totalCreditos = 0;

    // Verificar si el estudiante está inscrito en un taller
    puts("¿Estás inscrito en un taller? (1 = Sí, 2 = No): ");
    scanf("%d", &taller);

    if (taller == 1) {
        totalCreditos++;  // Obtiene 1 crédito por estar inscrito en un taller
        puts("Tienes 1 crédito.");

        // Verificar si el estudiante participó en la carrera
        puts("¿Participaste en la carrera? (1 = Sí, 2 = No): ");
        scanf("%d", &carrera);

        if (carrera == 1) {
            totalCreditos++;  // Crédito adicional por participar en la carrera
            puts("Tienes otro crédito por participar en la carrera.");

            // Verificar si el estudiante quedó en uno de los 3 primeros lugares
            puts("¿Quedaste en uno de los 3 primeros lugares? (1 = Sí, 2 = No): ");
            scanf("%d", &lugar);

            if (lugar == 1) {
                totalCreditos++;  // Crédito adicional por quedar en uno de los 3 primeros lugares
                puts("¡Genial! Tienes un total de 3 créditos.");
            } else {
                puts("Tienes un total de 2 créditos.");
            }
        } else {
            puts("Tienes un total de 1 crédito.");
        }
    } else if (taller == 2) {
        puts("Por favor, inscríbete en un taller para obtener créditos.");

        // Verificar si el estudiante participó en la carrera sin estar inscrito en un taller
        puts("¿Participaste en la carrera? (1 = Sí, 2 = No): ");
        scanf("%d", &carrera);

        if (carrera == 1) {
            totalCreditos++;  // Crédito por participar en la carrera
            puts("Tienes 1 crédito por participar en la carrera.");

            // Verificar si quedó en uno de los 3 primeros lugares
            puts("¿Quedaste en uno de los 3 primeros lugares? (1 = Sí, 2 = No): ");
            scanf("%d", &lugar);

            if (lugar == 1) {
                totalCreditos++;  // Crédito adicional
                puts("Tienes un total de 2 créditos.");
            } else {
                puts("Tienes un total de 1 crédito.");
            }
        } else {
            puts("No tienes créditos.");
        }
    } else {
        puts("Opción inválida.");
    }

    return 0;
}

