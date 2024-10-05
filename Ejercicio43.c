/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Hacer un programa que simule un cajero automatico con un saldo inicila de 1000 */

#include <stdio.h>

int main(){
	 puts("------CAJERO AUTOMATICO------");
	 puts("1) Ingresar dinero");
	 puts("2) Retirar dinero");
	 puts("3) Salir");

	 int Opcion;
    float Depositar, Saldo = 1000, Nuevo_Saldo = 0;
	 puts("Elige un opcion");
	 scanf("%d",&Opcion);
	 if(Opcion == 1){
	 	  puts("¿Cuanto dinero vas a ingresar?");
		  scanf("%f",&Depositar);
		  Nuevo_Saldo = Saldo + Depositar;
		  printf("Tu nuevo saldo es de: $%.2f\n",Nuevo_Saldo);
	 }
	 else if(Opcion == 2){
	     puts("¿Cuanto dinero vas a retirar?");
        scanf("%f",&Depositar);
        if(Depositar  > 1000){
		      puts("Saldo insuficiente, Intenta otra vez");
		  }
		  else{
		      Nuevo_Saldo = Saldo - Depositar;
            printf("Tu nuevo saldo es de: $%.2f\n",Nuevo_Saldo);
		  }
	 }
	 else if(Opcion == 3){
	 }
	 else{
	     puts("Opcion Invalida");
	 }
    return 0;
}
