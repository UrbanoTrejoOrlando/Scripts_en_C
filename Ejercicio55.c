/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Calcular el mayor de dos numeros leídos del teclado y visualizarlos en pantalla. */

#include <stdio.h>

// Método principal
int main() {
    int Numero1, Numero2;

    // Solicitar entrada de los dos números
    puts("Ingresa el número 1:");
    scanf("%d", &Numero1);
    puts("Ingresa el número 2:");
    scanf("%d", &Numero2);

    // Comparar y mostrar el mayor o indicar si son iguales
    if (Numero1 > Numero2) {
        printf("El número mayor es: %d\n", Numero1);
    } else if (Numero1 == Numero2) {
        puts("Los números son iguales.");
    } else {
        printf("El número mayor es: %d\n", Numero2);
    }

    return 0; // Finalizar el programa correctamente
}

