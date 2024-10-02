/* Orlando Urbano Trejo @Lando
 * Fecha: 11:07:2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar el sueldo semanal de N trabajadores y aplicar descuentos dependiendo de las horas se hara un descuento correspondiente */ 

#include <stdio.h>
int main(){
	 int trabajadores;
	 float horasTrabajadas, sueldoHora, salario = 0, nuevoSalario = 0, total = 0;
	 char nombres[50];
	 // Entrada de datos
	 puts("Numero de trabajadores: ");
	 scanf("%d",&trabajadores);
	 for(int i = 0; i < trabajadores; i++){
	     // Solicitud de datos de entrada
		  printf("Nombre del trabajador %d:\n",i+1);
		  scanf("%s",&nombres);
		  puts("Horas Trabajadas: ");
		  scanf("%f",&horasTrabajadas);
		  puts("Sueldo por hora: ");
		  scanf("%f",&sueldoHora);
		  salario = horasTrabajadas * sueldoHora;
		  // Condiciones
	      if(salario >= 0 && salario <= 150){
		      nuevoSalario = salario * 0.5;
	      }
	      else if(salario > 150 && salario <= 300){
	 	      nuevoSalario = salario * 0.7;
		  }
	      else if(salario > 300 && salario <= 450){
		      nuevoSalario = salario * 0.9;
		  }
	      else{
	 	      nuevoSalario = 0;
	      }
	 total = salario - nuevoSalario;
	 printf("Trabajador: %s\n",nombres);
	 printf("Salario final: %.2f\n",total);
	 }
	 return 0;
}
