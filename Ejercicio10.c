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


