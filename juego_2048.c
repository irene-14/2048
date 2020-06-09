/* 
 * File:   juego_2048.c
 * Author: Irene Truchado Mazzoli
 *
 * Created on 12 de abril de 2017, 15:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "juego_2048.h"
#define TAM 16


void print_matrix (int d [TAM]) {
   
    printf("     -----+-----+-----+-----");
    printf("\n    |  %d  |  %d  |  %d  |  %d  |\n" ,d[0], d[1], d[2], d[3]);
    printf("     -----+-----+-----+-----");
    printf("\n    |  %d  |  %d  |  %d  |  %d  |\n" ,d[4], d[5], d[6], d[7]);
    printf("     -----+-----+-----+-----");
    printf("\n    |  %d  |  %d  |  %d  |  %d  |\n" ,d[8], d[9], d[10], d[11]);
    printf("     -----+-----+-----+-----");
    printf("\n    |  %d  |  %d  |  %d  |  %d  |\n" ,d[12], d[13], d[14], d[15]);
    printf("     -----+-----+-----+-----\n");
}

int generate_random (int d [TAM]) {

    int box = 0,number = 0, x = 0;

    /* This loop obtains a random box and check if it's not empty. */
    do {
        srand(time(NULL));
        box = rand() % (TAM-1);} while (d [box] != 0);
    
    srand(time(NULL));
    x= rand() % TAM;

    if (x < 8){
	number = 2;
    }
    else {
	number = 4; /* We obtain a random 2 or 4. */
    }
    
    d [box] = number; /* The random number is allocated in the random box. */

    return d[TAM];
}

void print_info () {
    char move [TAM];
    
    printf("\nThe commands you can use are: U (up), D (down), L(left), R (right), Q (quit).\n");
    printf("Introduce your move: ");
    scanf ("%s", move);
    get_command (move);
    printf("\n");
}

void get_command (char c  [TAM]) {
    
    if (strcmp (c, "up") || strcmp (c, "u") == 0 || strcmp (c, "UP") == 0 || strcmp (c, "U") == 0) {
        move_up ();
    }
    
    if (strcmp (c, "down") == 0 || strcmp (c, "d") == 0 || strcmp (c, "DOWN") == 0 || strcmp (c, "D") == 0) {
        move_down ();
    }
    
    if (strcmp (c, "left") == 0 || strcmp (c, "l") == 0 || strcmp (c, "LEFT") == 0 || strcmp (c, "L") == 0) {
        move_left ();
    }
    
    if (strcmp (c, "right") == 0 || strcmp (c, "r") == 0 || strcmp (c, "RIGHT") == 0 || strcmp (c, "R") == 0) {
        move_right ();
    }
    
    else {
        printf ("Introduced command unknow.\n");
        print_info ();
    }
}

void move_up () {return;}
void move_down () {return;}
void move_left () {return;}
void move_right () {return;}