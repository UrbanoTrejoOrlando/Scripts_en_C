/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Hacer un menú que considere las siguientes opciones:
 * 1) Cubo de un número, 2) Número par o impar, 3) Salir
 */

#include <stdio.h>
#include <math.h>

int main() {
    int Opcion, Numero;
    float Cubo = 0;

    // Menú principal
    do {
        puts("------MENU DE OPCIONES------");
        puts("1) Cubo de un numero");
        puts("2) Numero par o impar");
        puts("3) Salir");
        puts("Elige una opcion:");

        // Solicita la opción del usuario
        scanf("%d", &Opcion);

        switch (Opcion) {
            case 1:
                // Opción para calcular el cubo
                puts("Ingresa un número: ");
                scanf("%d", &Numero);
                Cubo = pow(Numero, 3); // Calcula el cubo del número
                printf("El cubo de %d es: %.2f\n", Numero, Cubo);
                break;
            
            case 2:
                // Opción para verificar si el número es par o impar
                puts("Ingresa un número: ");
                scanf("%d", &Numero);
                if (Numero % 2 == 0) {
                    puts("Número par");
                } else {
                    puts("Número impar");
                }
                break;

            case 3:
                // Opción para salir
                puts("Fin del programa.");
                break;

            default:
                // Opción inválida
                puts("Opción inválida, intenta nuevamente.");
                break;
        }
    } while (Opcion != 3); // El menú se repite hasta que el usuario elija salir

    return 0;
}

