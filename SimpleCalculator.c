/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleCalculator.c
 * Author: Luís Oliveira <https://github.com/LuisCarlosOliveira>
 * Simple calculator 
 * Created on 7 de abril de 2020, 18:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float n1 , n2, total;
    char signal;
    
    printf("Insert :");
    scanf("%f" "%c" "%f" ,&n1, &signal, &n2 );
    switch (signal){
            case'+': total = n1 + n2;
            break;
            case '-': total = n1 - n2;
            break;
            case '/':
            case '%' : //all the symbols for division
            case '\\': total = n1 / n2;
            break;
            case 'x': // all the symbols for multiplication
            case 'X':
            case '*': total = n1 * n2;
            break;
            default: printf("Invalid input");
    }
     printf("%.2f %c %.2f = %.2f",n1,signal,n2,total);             
    

    return (EXIT_SUCCESS);
}

