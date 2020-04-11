/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MonthDaysSwitch.c
 * Author: Luís Oliveira <https://github.com/LuisCarlosOliveira> 
 *                       <https://gitlab.com/LuisCarlosOliveira>
 * Created on 10 de abril de 2020, 18:26
 * Exercise 19.2 from L.Dams "Linguagem C"*/

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
    
int main(int argc, char** argv) {
    
    int month, days;
    
    printf("Introduce month number (1-12):");
    scanf("%d", &month);
    
    switch(month){
        case 2: days = 28;
        break;
        case 4:
        case 6:
        case 9:
        case 11: days=30;
        break;
        default: days=31;
    }
    
    printf("Month %d has %d days ", month, days);
            
    
            
            
    return (EXIT_SUCCESS);
}
