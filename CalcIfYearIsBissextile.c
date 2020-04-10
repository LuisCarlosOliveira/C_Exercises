/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalcIfYearIsBissextile.c
 * Author: Luís Oliveira <https://github.com/LuisCarlosOliveira>
 *                       <https://gitlab.com/LuisCarlosOliveira>
 * Created on 10 de abril de 2020, 18:18
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int y;
    
    printf("Write an year:");
    scanf("%d", &y);
    if(y% 4 == 0 && (y % 100 != 0 || y % 400 == 0)) /* expression revised 
                                                     * by @jleffler */
        printf("It's a Bissextile year");
    else
        printf("Is's not a Bissextile year");

    return (EXIT_SUCCESS);
}

