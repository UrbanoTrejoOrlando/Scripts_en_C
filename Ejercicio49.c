/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Define un array de 10 números enteros con nombre Num y asigna 5 valores.
 * Muestra el contenido de todos los elementos del array.
 */

#include <stdio.h>

int main() {
    int Num[10] = {1, -2, 0, 0, 14, 0, 5, 0, 0, 0};  // Inicializa el array con los valores dados

    // Mostrar el contenido de todos los elementos del array
    for (int i = 0; i < 10; i++) {
        printf("Posición %d: %d\n", i, Num[i]);
    }

    return 0;
}

