/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Ingresa por teclado el nombre y el signo de cualquier persona e imprime el nombre solo si la persona es signo Aries; caso contrario, imprime "No es signo Aries". */

#include <stdio.h>
#include <string.h>

// Método principal
int main() {
    char Nombre[30];
    char Signo[20];

    puts("Ingresa tu nombre:");
    scanf("%s", Nombre);  // No es necesario el & al ser una cadena
    puts("Ingresa tu signo:");
    scanf("%s", Signo);

    if (strcmp(Signo, "Aries") == 0) {
        printf("Eres signo Aries, tu nombre es: %s\n", Nombre);
    } else {
        puts("No eres signo Aries");
    }

    return 0;
} // Fin del método

