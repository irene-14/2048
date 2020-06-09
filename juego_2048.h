/* 
 * File:   juego_2048.h
 * Author: Irene Truchado Mazzoli
 *
 * Created on 12 de abril de 2017, 15:29
 */

#ifndef JUEGO_2048_H
#define JUEGO_2048_H

#include <stdio.h>
#include <stdlib.h>
#define TAM 16


void print_matrix (int n [TAM]);

int generate_random (int d [TAM]);

void print_info ();

void get_command (char com [TAM]);

void move_up ();
void move_down ();
void move_left ();
void move_right ();

#endif /* JUEGO_2048_H */

