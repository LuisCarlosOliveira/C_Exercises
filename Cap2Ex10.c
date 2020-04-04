/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cap2Ex10.c
 * Author: Luís Oliveira <https://github.com/LuisCarlosOliveira>
 * Cap 2 Exercise 10 from L. Damas "Linguagem C"
 * Program that ask for date yyyy/mm/dd and change to dd/mm/yyyy
 * Created on 4 de abril de 2020, 21:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int year, day, month;
    printf("Fill date: yyyy/mm/dd ");
    scanf("%d/%d/%d", &year, &month, &day);
    printf("Date: %d/%d/%d", day, month,year);

    return (EXIT_SUCCESS);
}

