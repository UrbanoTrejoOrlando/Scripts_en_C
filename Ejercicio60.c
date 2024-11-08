/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un programa que clasifique un triángulo tras recibir el tamaño de sus lados.
 * Se debe clasificar como: triángulo rectángulo, isósceles, equilátero o escaleno. */

#include <stdio.h>
#include <math.h>

int main() {
    int Lado_1, Lado_2, Lado_3;
    
    puts("Ingresa el tamaño del lado 1:");
    scanf("%d", &Lado_1);
    puts("Ingresa el tamaño del lado 2:");
    scanf("%d", &Lado_2);
    puts("Ingresa el tamaño del lado 3:");
    scanf("%d", &Lado_3);

    // Comprobar si los lados forman un triángulo válido
    if (Lado_1 <= 0 || Lado_2 <= 0 || Lado_3 <= 0 ||
        Lado_1 + Lado_2 <= Lado_3 || Lado_1 + Lado_3 <= Lado_2 || Lado_2 + Lado_3 <= Lado_1) {
        puts("No es un triángulo válido.");
        return 0;
    }

    // Clasificación del triángulo
    if (Lado_1 == Lado_2 && Lado_1 == Lado_3) {
        puts("Es un triángulo equilátero.");
    }
    else if (Lado_1 == Lado_2 || Lado_1 == Lado_3 || Lado_2 == Lado_3) {
        puts("Es un triángulo isósceles.");
    }
    else if (pow(Lado_1, 2) == pow(Lado_2, 2) + pow(Lado_3, 2) || 
             pow(Lado_2, 2) == pow(Lado_1, 2) + pow(Lado_3, 2) || 
             pow(Lado_3, 2) == pow(Lado_1, 2) + pow(Lado_2, 2)) {
        puts("Es un triángulo rectángulo.");
    }
    else {
        puts("Es un triángulo escaleno.");
    }

    return 0;
}


