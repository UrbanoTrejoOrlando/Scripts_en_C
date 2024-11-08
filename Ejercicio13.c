#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que determina el precio del boleto de un viaje */

// Prototipo de la función para calcular el precio del boleto
float calcularPrecioBoleto(float precioBoleto, float numKilometros);

int main(){
    float precioBoleto = 20.50, numKilometros, precio = 0;
    
    // Entrada de datos
    puts("Numero de kilometros a recorrer: ");
    scanf("%f", &numKilometros);
    
    // Calcular el precio del boleto
    precio = calcularPrecioBoleto(precioBoleto, numKilometros);
    
    // Imprimir el precio del boleto
    printf("El precio de tu boleto es de: $%.2f\n", precio);
    
    return 0;
}

// Función para calcular el precio del boleto
float calcularPrecioBoleto(float precioBoleto, float numKilometros) {
    return precioBoleto * numKilometros;
}

