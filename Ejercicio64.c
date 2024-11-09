/*
 * Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Descripción: Programa en C que solicita una hora (horas, minutos y segundos) y verifica si es válida.
 *
 * Notas:
 * - Las horas deben estar entre 0 y 23.
 * - Los minutos y segundos deben estar entre 0 y 59.
 */

#include <stdio.h>

// Función principal
int main() {
    int horas, minutos, segundos;

    // Solicitar al usuario que ingrese la hora, los minutos y los segundos
    printf("Ingresa las horas (0-23): ");
    scanf("%d", &horas);

    printf("Ingresa los minutos (0-59): ");
    scanf("%d", &minutos);

    printf("Ingresa los segundos (0-59): ");
    scanf("%d", &segundos);

    // Verificar si la hora es válida
    if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59) {
        printf("HORA CORRECTA\n");
    } else {
        printf("HORA INCORRECTA\n");
    }

    return 0;
} // Fin de la función principal

