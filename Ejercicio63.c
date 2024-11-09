/*
 * Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Descripción: Programa en C que pide una letra del abecedario y determina si es una vocal (mayúscula o minúscula).
 */

#include <stdio.h>

// Función principal
int main() {
    char letra;

    // Solicitar al usuario que ingrese una letra
    printf("Ingresa una letra del abecedario: ");
    scanf(" %c", &letra); // Usamos " %c" para ignorar espacios en blanco

    // Verificar si la letra es una vocal (mayúscula o minúscula)
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("ES UNA VOCAL\n");
    } else {
        printf("NO ES UNA VOCAL\n");
    }

    return 0;
} // Fin de la función principal

