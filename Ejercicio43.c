/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Hacer un programa que simule un cajero automático con un saldo inicial de 1000 */

#include <stdio.h>

int main() {
    int Opcion;
    float Depositar, Saldo = 1000, Nuevo_Saldo;

    // Menú del cajero automático
    do {
        puts("------CAJERO AUTOMATICO------");
        puts("1) Ingresar dinero");
        puts("2) Retirar dinero");
        puts("3) Salir");

        // Solicita la opción del usuario
        puts("Elige una opción:");
        scanf("%d", &Opcion);

        switch (Opcion) {
            case 1:
                // Opción para ingresar dinero
                puts("¿Cuánto dinero vas a ingresar?");
                scanf("%f", &Depositar);
                Nuevo_Saldo = Saldo + Depositar;
                printf("Tu nuevo saldo es de: $%.2f\n", Nuevo_Saldo);
                Saldo = Nuevo_Saldo; // Actualiza el saldo
                break;
            
            case 2:
                // Opción para retirar dinero
                puts("¿Cuánto dinero vas a retirar?");
                scanf("%f", &Depositar);
                
                // Verifica si el saldo es suficiente para el retiro
                if (Depositar > Saldo) {
                    puts("Saldo insuficiente, intenta otra vez.");
                } else {
                    Nuevo_Saldo = Saldo - Depositar;
                    printf("Tu nuevo saldo es de: $%.2f\n", Nuevo_Saldo);
                    Saldo = Nuevo_Saldo; // Actualiza el saldo
                }
                break;

            case 3:
                // Opción para salir
                puts("Gracias por usar el cajero automático.");
                break;

            default:
                // Opción inválida
                puts("Opción inválida, intenta nuevamente.");
                break;
        }
    } while (Opcion != 3); // Repite el menú hasta que elija salir

    return 0;
}

