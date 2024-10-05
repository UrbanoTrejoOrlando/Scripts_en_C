/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Visualizar la tarifa de luz segun el gasto de corriente electrica, para un gasto menor de: 1000 Kw, la tarifa es de 1.2 entre 1000, 1850 Kw la tarifa es 1.0 y mayor de 1850 la tarifa es de 0.9 */

#include <stdio.h>
// Metodo principal
int main(){
    float Corriente, Tarifa1 = 1.2, Tarifa2 = 1.0, Tarifa3 = 0.9;
    float Total_Pagar = 0;
    puts("Ingresa el gasto de corriente electrica:");
    scanf("%f",&Corriente);
    if(Corriente < 1000){
        printf("Tu tarifa es de: %.2f\n",Tarifa1);
    }
	 else if(Corriente > 1000 && Corriente < 1850){
         printf("Tu tarifa es de: %.2f\n",Tarifa2);
    }
	 else{
        printf("Tu tarifa es de: %.2f\n",Tarifa3);
    }
    return 0;
}// Fin del metodo
