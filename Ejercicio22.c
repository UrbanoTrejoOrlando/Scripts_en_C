#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcule las comisiones de un empleado dependiendo de las ventas realizadas */

// Prototipo de la función para calcular la comisión total
float calcularComision(int ventas);

int main(){
    float comision = 0, sueldo, precioVenta, total;
    int ventas;
    
    // Entrada de datos
    puts("Sueldo fijo:");
    scanf("%f", &sueldo);
    
    puts("Ventas realizadas:");
    scanf("%d", &ventas);
    
    // Calcular la comisión total
    comision = calcularComision(ventas);
    
    // Calcular el sueldo total
    total = comision + sueldo;
    
    // Operaciones e impresión de resultados
    printf("Comisión: $%.2f\n", comision);
    printf("Sueldo total: $%.2f\n", total);
    
    return 0;    
}

// Función para calcular la comisión por ventas
float calcularComision(int ventas) {
    float precioVenta, comision = 0;
    
    for(int i = 0; i < ventas; i++) {
        printf("Precio de la venta %d: ", i + 1);
        scanf("%f", &precioVenta);
        comision += (precioVenta * 0.10);  // 10% de comisión sobre cada venta
    }
    
    return comision;
}

