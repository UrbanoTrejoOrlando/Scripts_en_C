/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Sumar numeros pares desde n hasta m. */

#include <stdio.h>
int main(){
    int Num_Inicio,Num_Final, Contador = 1, Suma = 0;
    puts("Ingresa un numero para el inicio de la suma");
    scanf("%d",&Num_Inicio);
    puts("Ingresa un numero para el limite de la suma");
    scanf("%d",&Num_Final);
    for(int i = 1; i >= Num_Inicio && i <= Num_Final; i++){
            if(i % 2 == 0){
            Suma += i;
            }
    }
    printf("Suma: %d\n",Suma);
    return 0;
}// Fin del metodo

