/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Luis Oliveira <https://github.com/LuisCarlosOliveira>
 * Program to input 2 characters 
 * Exercise prog0212 from Luis Damas book "Linguagem C"
 * Created on 24 de março de 2020, 16:00
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    char ch1, ch2;
    printf("Write a character:");
    scanf("%c",&ch1);
    printf("Write another a character:");
    scanf(" %c",&ch2);
    printf("The letters are '%c' and '%c'. ", ch1,ch2);

    return (EXIT_SUCCESS);
}

