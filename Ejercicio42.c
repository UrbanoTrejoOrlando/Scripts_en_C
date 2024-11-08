/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 23-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Convertir de grados Celsius a Fahrenheit */

#include <stdio.h>

int main() {
    float grados, fahrenheit;

    // Solicita al usuario la temperatura en grados Celsius
    puts("Ingresa los grados a convertir: ");
    scanf("%f", &grados);  // Se debe pasar la dirección de memoria de 'grados' usando el operador '&'

    // Realiza la conversión de Celsius a Fahrenheit
    fahrenheit = (grados * 1.8) + 32;

    // Muestra el resultado de la conversión
    printf("Conversión: %.2f °F\n", fahrenheit);

    return 0;
}

