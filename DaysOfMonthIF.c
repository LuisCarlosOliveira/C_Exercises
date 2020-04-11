/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DaysOfMonthIF.c
  * Author: Luís Oliveira <https://github.com/LuisCarlosOliveira> 
 *                       <https://gitlab.com/LuisCarlosOliveira>
 * Created on 10 de abril de 2020, 18:24
 *
 * Exercise 19.1 from L.Dams "Linguagem C"*/

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {
    
    
    int month,days;
    printf("Introduce month number (1-12):");
    scanf("%d", &month);
    if(month==2)
        days=28;
    else
        if(month==4 || month==6 || month==9 || month==11 )
            days=30;
        else
            days=31;
    printf("Month %d has %d days ", month, days);
                   
    
    return (EXIT_SUCCESS);
}

