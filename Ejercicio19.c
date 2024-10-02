/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 * Algoritmo que determina el descuento de un empleado */

#include <stdio.h>
int main(){
	char nombre[10];
    float salario, total = 0;
    puts("Nombre:");
    scanf("%s",&nombre);
    puts("Salario: ");
    scanf("%f",&salario);
    total = salario - (salario * 0.20);
    printf("Empleado: %s su salario es: %.2f\n",nombre,total);
	return 0;
}
