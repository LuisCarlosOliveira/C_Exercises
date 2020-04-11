/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ValDate.c
 * Author: Luís Oliveira <https://github.com/LuisCarlosOliveira> 
 *                       <https://gitlab.com/LuisCarlosOliveira>
 * Exercise 20 from L.Dams "Linguagem C"
 * Validate date program
 * Created on 11 de abril de 2020, 15:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int day, month, year;
    
    printf("Insert date (dd/mm/yyyy): \n");
    scanf("%d / %d / %d", &day, &month, &year);
    switch(month){
        case 2:if
                ( day>0 && day <= 28 + (year % 4 == 0 && (year % 100 != 0 
                   || year % 400 == 0)))
                printf("Valid date");
                else
                    printf("Invalid date");  
        break;
        case 4:
        case 6:
        case 9:
        case 11: if(day >0 && day <= 30 )
             printf("Valid date");
                 else
                    printf("Invalid date");       
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:    
        case 12: if(day>0 && day <= 31 )
             printf("Valid date");
                 else
                    printf("Invalid date");
        break;
        default: printf("Invalid date");
    }
        
return (EXIT_SUCCESS);
     
    }



