/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MonthDaysSwitchBreak.c
 * Author: Luís Oliveira <https://github.com/LuisCarlosOliveira> 
 *                       <https://gitlab.com/LuisCarlosOliveira>
 * Created on 10 de abril de 2020, 18:31
 * Exercise 19.3 from L.Dams "Linguagem C" */

#include <stdio.h>
#include <stdlib.h>

/* 
 * 
 */
int main(int argc, char** argv) {
    
    int month, days =28;
    
    printf("Introduce month number (1-12):");
    scanf("%d", &month);
    
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:    
        case 12: days = days + 1;
        case 4:
        case 6:
        case 9:
        case 11: days=days+2;
        default: days;
    }
    
    printf("Month %d has %d days ", month, days);
             
    return (EXIT_SUCCESS);
}

