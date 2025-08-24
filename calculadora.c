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
    int valor1_i, valor2_i;
    float valor1_f, valor2_f;
        
    valor1_i = 0;
    valor2_i = 0;
    valor1_f = 0;
    valor2_f = 0;
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
                scanf("%i", &valor1_i);
                scanf("%i", &valor2_i);
                printf("%i + %i = %i\n", valor1_i, valor2_i, sumar(valor1_i, valor2_i));
                break;
            case 'r':
                printf("Funcion restar\n\n");
                limpiar_buffer();
                printf("Introduce 2 valores para restar\n");
                scanf("%i", &valor1_i);
                scanf("%i", &valor2_i);
                printf("%i - %i = %i", valor1_i, valor2_i, restar(valor1_i, valor2_i));
                break;
            case 'm':
                printf("Funcion multiplicar\n\n");
                limpiar_buffer();
                printf("Introduce 2 valores para multiplicar\n");
                scanf("%i", &valor1_i);
                scanf("%i", &valor2_i);
                printf("%i * %i = %i", valor1_i, valor2_i, multiplicar(valor1_i, valor2_i));
                break;
            case 'd':
                printf("Funcion dividir\n\n");
                limpiar_buffer();
                printf("Introduce 2 valores para dividir\n");
                scanf("%f", &valor1_f);
                scanf("%f", &valor2_f);
                printf("%f / %f = %f", valor1_f, valor2_f, dividir(valor1_f, valor2_f));
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