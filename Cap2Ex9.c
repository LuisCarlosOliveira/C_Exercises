/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cap2Ex9.c
 * Author: Luís Oliveira <https://github.com/LuisCarlosOliveira>
 * Cap 2 Exercise 9 from L. Damas "Linguagem C"
 * Program that ask for day, month and year and shows date dd/mm/yyyy
 * Created on 4 de abril de 2020, 21:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int year, day, month;
    printf("Day: ");
    scanf("%d",&day);
    printf("Month: ");
    scanf("%d",&month);
    printf("Year: ");
    scanf("%d",&year);
    printf("Date: %d/%d/%d", day, month,year);

    return (EXIT_SUCCESS);
}

