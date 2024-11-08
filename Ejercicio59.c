/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un programa que calcule la aceptación de una solicitud en base a los siguientes parámetros: edad, nota y sexo.
 * Mínimo: Nota (5), edad (18), sexo M -> POSIBLE
 * Mínimo: Nota (5), edad (18), sexo F -> ACEPTADA
 * Otros casos -> NO ACEPTADA */

#include <stdio.h>

// Método principal
int main() {
    int Nota;
    int Edad;
    char Sexo;

    puts("Ingresa tu calificación obtenida:");
    scanf("%d", &Nota);
    puts("Ingresa tu edad:");
    scanf("%d", &Edad);
    puts("Ingresa tu sexo (M/F):");
    scanf(" %c", &Sexo);

    if (Nota >= 5 && Edad >= 18) {
        if (Sexo == 'M') {
            printf("Solicitud (Nota: %d), Edad (%d), Sexo (%c) ---> SOLICITUD POSIBLE\n", Nota, Edad, Sexo);
        } else if (Sexo == 'F') {
            printf("Solicitud (Nota: %d), Edad (%d), Sexo (%c) ---> SOLICITUD ACEPTADA\n", Nota, Edad, Sexo);
        } else {
            puts("Sexo no válido. SOLICITUD NO ACEPTADA");
        }
    } else {
        puts("SOLICITUD NO ACEPTADA");
    }

    return 0;
} // Fin del método

