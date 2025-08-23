#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"



void limpiar_buffer(){
    int c;
    while( (c = getchar()) != '\n' && c != EOF );
}



int main(void){
    char opcion;
    bool bucle_menu;
    int valor1, valor2;
    
    valor1 = 0;
    valor2 = 0;
    bucle_menu = true;
    

    while(bucle_menu){
        system("clear");

        printf("Elige la operacion que quieres realizar: \n");
        printf("\n");
        printf("Suma           (s)\n");
        printf("Resta          (r)\n");
        printf("Multiplicacion (m)\n");
        printf("Division       (d)\n");
        printf("Salir          (S)\n");
        printf("\n");
    
        opcion = getchar();
    
        switch(opcion){
            case 's':
                printf("Funcion sumar\n\n");
                limpiar_buffer();
                printf("Introduce 2 valores para sumar\n");
                scanf("%i", &valor1);
                scanf("%i", &valor2);
                printf("%i + %i = %i", valor1, valor2, sumar(valor1, valor2));
                break;
            case 'r':
                printf("Funcion restar\n\n");
                limpiar_buffer();
                printf("Introduce 2 valores para restar\n");
                scanf("%i", &valor1);
                scanf("%i", &valor2);
                printf("%i - %i = %i", valor1, valor2, restar(valor1, valor2));
                break;
            case 'm':
                printf("Funcion multiplicar\n\n");
                limpiar_buffer();
                printf("Introduce 2 valores para multiplicar\n");
                scanf("%i", &valor1);
                scanf("%i", &valor2);
                printf("%i * %i = %i", valor1, valor2, multiplicar(valor1, valor2));
                break;
            case 'd':
                printf("Funcion dividir\n\n");
                limpiar_buffer();
                printf("Introduce 2 valores para dividir\n");
                scanf("%f", &valor1);
                scanf("%f", &valor2);
                printf("%f / %f = %f", valor1, valor2, dividir(valor1, valor2));
                break;
            case 'S':
                printf("Hasta la proxima\n\n");
                bucle_menu = false;
                limpiar_buffer();
                break;
            default:
                printf("Debes elegir una las operaciones\n");
                limpiar_buffer();
                break;
        }


        printf("\nPresiona 'Enter' para continuar...");
        getchar();
        limpiar_buffer();

    };

    return 0;

}