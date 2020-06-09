/* 
 * File:   main.c
 * Author: Irene Truchado Mazzoli
 *
 * Created on 12 de abril de 2017, 15:29
 */

#include <stdio.h>
#include <stdlib.h>

#include "juego_2048.h"

#define TAM 16

int main () {
    int d [TAM] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int n = 0;
    
    printf("\n WELCOME TO THE 2048 GAME\n\n\n");
    
    generate_random (d);

    print_matrix (d);
    
    print_info ();

    return EXIT_SUCCESS;
}

