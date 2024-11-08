/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un programa que lea una cadena por teclado y compruebe si es una letra mayúscula */

#include <stdio.h>

// Método principal
int main() {
    char letra;
    puts("Ingresa una letra:");
    scanf(" %c", &letra);  // Usamos %c para capturar un solo carácter

    if (letra >= 'A' && letra <= 'Z') {
        printf("La letra %c es mayúscula\n", letra);
    } else {
        printf("La letra %c es minúscula\n", letra);
    }

    return 0;
} // Fin del método

