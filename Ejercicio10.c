/* Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula el saldo de sus clientes, para no generar intereses y dependiendo del año hacer descuentos especificos. */

#include <stdio.h>
int main(){
	float saldoActual = 0, pagoActual = 0, saldoAnterior = 0, saldoMinimo = 0, pagoInteres = 0, montoCompras = 0, deposito = 0;
	int clientes;
	char nombre[50];
    puts("Numero de clientes: ");
	scanf("%d",&clientes);
    for(int i = 0; i < clientes; i++){
		// Entrada de datos
		puts("Nombre cliente: ");
		scanf("%s",&nombre);
		puts("Saldo anterior: ");
		scanf("%f",&saldoAnterior);
		puts("Ultimo deposito: ");
		scanf("%f",&deposito);
		puts("Monto por ventas: ");
		scanf("%f",&montoCompras);
		puts("Saldo Actual: ");
		scanf("%f",&saldoActual);

		pagoActual = (saldoActual * 0.12) + 200;
		saldoMinimo = saldoActual * 0.15;
		pagoInteres = saldoActual * 0.85;
	    // Impresion de datos 	
	    printf("Tu saldo actual %s es de %.2f pesos\n",nombre,pagoActual);
		printf("Tu pago minimo %s es de %.2f pesos\n",nombre,saldoMinimo);
		printf("El pago pago para no generar intereses %s es de %.2f pesos\n",nombre,pagoInteres);
    }
	 return 0;
}
