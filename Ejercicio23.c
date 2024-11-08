#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar si eres mayor de edad */

// Prototipo de la función para verificar la edad
void verificarEdad(int edad);

int main(){
    int edad;
    
    // Entrada de datos
    puts("Edad:");
    scanf("%d", &edad);
    
    // Verificar si la persona es mayor de edad
    verificarEdad(edad);
    
    return 0;
}

// Función para verificar si la persona es mayor o menor de edad
void verificarEdad(int edad) {
    if (edad >= 18) {
        puts("Eres mayor de edad");
    } else {
        puts("Eres menor de edad");
    }
}

