#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para calcular el descuento de un medicamento */

// Prototipo de la función para calcular el descuento
float calcularDescuento(float precio);

int main(){
    char nombre[10];
    float precio, total = 0;
    
    // Entrada de datos
    puts("Nombre:");
    scanf("%s", nombre);
    
    puts("Precio del Medicamento: ");
    scanf("%f", &precio);
    
    // Calcular el total con el descuento
    total = calcularDescuento(precio);
    
    // Mostrar el total a pagar
    printf("Cliente: %s el total a pagar es de: $ %.2f\n", nombre, total);
    
    return 0;
}

// Función para calcular el descuento del medicamento
float calcularDescuento(float precio) {
    return precio - (precio * 0.35);  // Aplica un descuento del 35%
}

