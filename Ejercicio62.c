/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio:Realiza un programa que pida por teclado el resultado (dato entero) obtenido al lanzar un dado de seis caras y muestre por pantalla el numero en letras (dato cadena) de la cara opuesta al resultado obtenido.
Nota 1: En las caras opuestas de un dado de seis caras estan los numeros: 1-6, 2-5 y 3-4.
Nota 2: Si el numero del dado introducido es menor que 1 o mayor que 6, se mostrara el mensaje: ERROR: numero incorrecto.*/
#include <stdio.h>
#include <string.h>
// Metodo principal
int main(){
    int Cara;
    puts("Ingresa la cara del dado:");
    scanf("%d",&Cara);
    switch(Cara){
        case 1:
        puts("El valor contrario de la cara es: SEIS");
        break;
        case 2:
        puts("El valor contrario de la cara es: CINCO");
        break;
        case 3:
        puts("El valor contrario de la cara es: CUATRO");
        break;
        case 4:
        puts("El valor contrario de la cara es: TRES");
        break;
        case 5:
        puts("El valor contrario de la cara es: DOS");
        break;
        case 6:
        puts("El valor contrario de la cara es: UNO");
        break;
        default:
        puts("ERROR: Numero incorrecto");
    }
	 return 0;
}

