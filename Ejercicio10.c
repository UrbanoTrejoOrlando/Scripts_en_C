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
		  



