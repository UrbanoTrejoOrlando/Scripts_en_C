/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Haz un ejercicio que ponga al reves una cadena ingresada por teclado */

#include <stdio.h>
#include <string.h>

// Método principal
int main() {
    char cadena[20];
    int longitud, i;
    char temp;

    puts("----CADENA INVERTIDA----");
    puts("Ingresa una palabra:");
    scanf("%s", cadena);

    // Calcular la longitud de la cadena
    longitud = strlen(cadena);

    // Invertir la cadena manualmente
    for (i = 0; i < longitud / 2; i++) {
        temp = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temp;
    }

    puts("Cadena invertida:");
    printf("%s\n", cadena);

    return 0;
}
// Fin del método

