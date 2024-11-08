/* Autor:  Orlando Urbano Trejo @Lando 
 * Fecha:  20-07-2023 
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula los créditos de alumnos dependiendo de ciertas actividades */

#include <stdio.h>

int main() {
    int carrera, credito, lugar;

    // Entrada de datos
    puts("¿Estás inscrito en un taller? (1 = Sí, 2 = No): ");
    scanf("%d", &credito);

    // Condicionales para verificar si está inscrito en un taller
    if (credito == 1) {
        puts("Tienes un crédito por estar en el taller.");
        puts("¿Participaste en la carrera? (1 = Sí, 2 = No): ");
        scanf("%d", &carrera);

        if (carrera == 1) {
            puts("Tienes otro crédito por participar en la carrera.");
            puts("¿Quedaste en uno de los 3 primeros lugares? (1 = Sí, primer lugar; 2 = Sí, segundo lugar; 3 = No): ");
            scanf("%d", &lugar);

            if (lugar == 1) {
                puts("Genial, tienes tres créditos.");
            } else if (lugar == 2) {
                puts("Tienes dos créditos.");
            } else {
                puts("Tienes dos créditos.");
            }
        } else if (carrera == 2) {
            puts("Tienes solo un crédito.");
        } else {
            puts("Opción inválida para la carrera.");
        }
    } else if (credito == 2) {
        puts("Inscríbete en un taller, por favor.");
        puts("¿Participaste en la carrera? (1 = Sí, 2 = No): ");
        scanf("%d", &carrera);

        if (carrera == 1) {
            puts("Tienes un crédito por participar en la carrera.");
            puts("¿Quedaste en uno de los 3 primeros lugares? (1 = Sí, primer lugar; 2 = Sí, segundo lugar; 3 = No): ");
            scanf("%d", &lugar);

            if (lugar == 1) {
                puts("Tienes dos créditos.");
            } else if (lugar == 2) {
                puts("Tienes un crédito.");
            } else {
                puts("Tienes un crédito.");
            }
        } else if (carrera == 2) {
            puts("No tienes ningún crédito.");
        } else {
            puts("Opción inválida para la carrera.");
        }
    } else {
        puts("Opción inválida para el taller.");
    }

    return 0;
}

