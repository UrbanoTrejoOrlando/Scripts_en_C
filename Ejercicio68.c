/*
 * Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  17-08-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Descripción: Programa en C que ofrece un menú de conversiones de unidades.
 */

#include <stdio.h>

int main() { 
    int opcion, unidadEntrada, unidadDestino;
    double valor = 0, resultado = 0;

    // Menú general de tipos de conversión
    char general[8][100] = {
        "---CONVERSION DE UNIDADES----", 
        "0) Longitud", 
        "1) Masa", 
        "2) Tiempo",
        "3) Volumen",
        "4) Tamaño de Datos", 
        "5) Velocidad", 
        "6) Temperatura"
    };

    // Unidades de cada tipo de conversión
    char menu[7][9][10] = {
        {"m", "cm", "km", "mm", "mi", "yd", "ft", "in"},         // Longitud
        {"kg", "to", "g", "st", "lb", "oz"},                    // Masa
        {"ms", "s", "min", "hr", "d"},                          // Tiempo
        {"l", "ml", "gal", "ozl", "m3", "ft3", "in3"},          // Volumen
        {"bit", "kbit", "B", "kB"},                             // Tamaño de Datos
        {"mi/h", "ft/s", "m/s", "km/h", "kn"},                  // Velocidad
        {"°C", "°F", "K"}                                       // Temperatura
    };

    // Factores de conversión
    double operaciones[7][9] = {
        {1, 100, 0.001, 1000, 0.000621371, 1.09361, 3.28084, 39.3701},  // Longitud
        {1, 0.001, 1000, 0.157473, 2.20462, 35.274},                   // Masa
        {1, 0.001, 0.0166667, 0.000277778, 0.0000115741},              // Tiempo
        {1, 1000, 0.264172, 33.814, 0.001, 0.0353147, 61.0237},        // Volumen
        {1, 0.001, 0.125, 0.000125},                                   // Tamaño de Datos
        {1, 1.46667, 0.44704, 1.60934, 0.868976},                      // Velocidad
        {1, 1.8, 1}                                                    // Temperatura
    };

    // Mostrar el menú principal
    for (int i = 0; i < 8; i++) {
        printf("%s\n", general[i]);
    }

    // Selección del tipo de conversión
    printf("Elige una opción: ");
    scanf("%d", &opcion);

    // Validar la opción y mostrar las unidades disponibles
    if (opcion >= 0 && opcion <= 6) {
        for (int j = 0; menu[opcion][j][0] != '\0'; j++) {
            printf("%d) %s\n", j, menu[opcion][j]);
        }
    } else {
        printf("Opción no válida.\n");
        return 1;
    }

    // Selección de las unidades de entrada y destino
    printf("Elige la unidad de entrada: ");
    scanf("%d", &unidadEntrada);
    printf("Elige la unidad de destino: ");
    scanf("%d", &unidadDestino);

    // Ingreso del valor a convertir
    printf("Introduce el valor a convertir: ");
    scanf("%lf", &valor);

    // Realizar la conversión
    resultado = valor * (operaciones[opcion][unidadDestino] / operaciones[opcion][unidadEntrada]);

    // Mostrar el resultado
    printf("%.2f %s = %.2f %s\n", valor, menu[opcion][unidadEntrada], resultado, menu[opcion][unidadDestino]);

    return 0;
} // Fin de la función principal

