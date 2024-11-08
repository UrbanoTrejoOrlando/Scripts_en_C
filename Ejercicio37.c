/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 20-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Este programa calcula la suma de los primeros diez números pares (0, 2, 4, ..., 18). */

#include <stdio.h>

int main() {
    int suma = 0;

    // Iteramos de 0 a 18 en pasos de 2, sumando cada número par
    for (int i = 0; i < 20; i += 2) {
        suma += i;
    }

    // Mostramos el resultado
    printf("Resultado: %d\n", suma);
    return 0;
}

