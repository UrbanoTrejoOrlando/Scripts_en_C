/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 25-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir un programa que lea un carácter en minúscula e imprima por pantalla,
 * el mismo carácter en mayúscula.
 */

#include <stdio.h>

// Método principal
int main() {
    char Letra_Minuscula, Letra_Mayuscula;

    puts("Ingresa una letra en minúscula:");
    // Usamos getchar() para leer el carácter, evitando problemas con el búfer
    Letra_Minuscula = getchar();
    
    // Aseguramos que la letra esté en minúscula antes de convertirla
    if (Letra_Minuscula >= 'a' && Letra_Minuscula <= 'z') {
        Letra_Mayuscula = Letra_Minuscula - 'a' + 'A';
        printf("La letra %c en minúscula es %c en mayúscula.\n", Letra_Minuscula, Letra_Mayuscula);
    } else {
        printf("El carácter ingresado no es una letra minúscula.\n");
    }

    return 0;
} // Fin del método

