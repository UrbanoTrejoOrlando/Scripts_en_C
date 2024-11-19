#include <stdio.h>
// Prototipos de funciones
void obtenerDatosCliente(char nombre[], float* saldoAnterior, float* deposito, float* montoCompras, float* saldoActual);
void calcularYMostrarDatos(char nombre[], float saldoActual);

int main(){
    int clientes;
    // Solicitar el número de clientes
    puts("Numero de clientes: ");
    scanf("%d", &clientes);

    for(int i = 0; i < clientes; i++){
        char nombre[50];
        float saldoAnterior, deposito, montoCompras, saldoActual;

        // Obtener los datos del cliente
		  obtenerDatosCliente(nombre, &saldoAnterior, &deposito, &montoCompras, &saldoActual);

		  // Calcular y mostrar los resultados
		  calcularYMostrarDatos(nombre, saldoActual);

	 }
		
	 return 0;
}
// Función para obtener los datos de un cliente
void obtenerDatosCliente(char nombre[], float* saldoAnterior, float* deposito, float* montoCompras, float* saldoActual) {
    puts("Nombre cliente: ");
    scanf("%s", nombre);

	 puts("Saldo anterior: ");
    scanf("%f", saldoAnterior);

    puts("Ultimo deposito: ");
    scanf("%f", deposito);

	 puts("Monto por ventas: ");
	 scanf("%f", montoCompras);

	 puts("Saldo Actual: ");
	 scanf("%f", saldoActual);
}
// Función para calcular y mostrar el saldo actual, pago mínimo e intereses
void calcularYMostrarDatos(char nombre[], float saldoActual) {
    float pagoActual = (saldoActual * 0.12) + 200;
    float saldoMinimo = saldoActual * 0.15;
    float pagoInteres = saldoActual * 0.85;

	 // Impresión de datos
	 printf("Tu saldo actual %s es de %.2f pesos\n", nombre, pagoActual);
	 printf("Tu pago minimo %s es de %.2f pesos\n", nombre, saldoMinimo);
    printf("El pago para no generar intereses %s es de %.2f pesos\n", nombre, pagoInteres);
}
