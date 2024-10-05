/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir en lenguaje C un programa que:
1) Pida por teclado una hora en tres variables: horas, minutos y segundos (datos enteros).
2) Muestre por pantalla:
"HORA CORRECTA", en el caso de que la hora sea valida.
"HORA INCORRECTA", en el caso de que la hora no sea valida.
Nota: para que una hora sea valida, se tiene que cumplir que:
    Las horas deben ser mayor o igual que 0 y menor o igual que 23.
    Los minutos deben ser mayor o igual que 0 y menor o igual que 59.
    Los segundos deben ser mayor o igual que 0 y menor o igual que 59. */

#include <stdio.h>
// Metodo principal
int main(){
    int Horas, Minutos, Segundos;
    puts("Ingresa las horas:");
    scanf("%d",&Horas);
    puts("Ingresa los minutos:");
    scanf("%d",&Minutos);
    puts("Ingresa los segundos:");
    scanf("%d",&Segundos);
    if(Horas >= 0 && Horas <=23 ){
        if(Minutos >= 0 && Minutos <= 59){
            if(Segundos >= 0 && Segundos <= 59){
                puts("HORA CORRECTA");
            }
            else{
                puts("HORA INCORRECTA");
            }
        }
        else{
            puts("HORA INCORRECTA");
        }
    }
    else{
        puts("HORA INCORRECTA");
    }
    return 0;
}// Fin del metodo

