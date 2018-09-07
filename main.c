/*
 * Este programa nos ayudará a calcular el promedio
 * de una serie de números cumpliendo cierta condición.
 *
 *
 * Autor: Alejandro Ramírez Michel
 * Fecha: 6 de septiembre, 2018
 * Correo: alex.ramirez.99@hotmail.com
 */
#include <stdio.h>
    int main() {
        float number;
        float cantidad =- 1;
        double average = 0;

        printf("Hello. I will help you get the average of the numbers you give me until I receive a 0.\n");

        do {
            printf("Give me the numbers you want to use: ");  //the program will keep asking the user for numbers until number=0
            scanf("%f", &number);
            average += number; //average will storage the numbers
            cantidad += 1;     //sum will + the amount of numbers given by the user
        } while (number!=0);   //the program will stop accepting numbers (the loop) and calculate the average

        average /= cantidad; //the sum of the numbers divided by the

        printf("The average is: %lf", average);


        return (0);
    }
