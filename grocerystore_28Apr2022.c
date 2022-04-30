/******************************************************************************

Lesson 28 Apr, Presentation Page 19, Task 7

*******************************************************************************/

#include <stdio.h>

int main()
{   
    printf("\tWelcome to the GreenGrocer!\n");
    printf("Today we offer fresh tomatoes, cucumbers, apples and cherries.\n");
    
    float fPriceTomato = 4.5;
    float fPriceCucumber = 2.8;
    float fPriceApple = 2.5;
    float fPriceCherry = 5.6;
    
    float fWeightTomato, fWeightCucumber, fWeightApple, fWeightCherry;

    printf("How many kilograms of Tomatoes do you want?\n");
    scanf("%f",&fWeightTomato);
    printf("How many kilograms of Cucumbers do you want?\n");
    scanf("%f",&fWeightCucumber);
    printf("How many kilograms of Apples do you want?\n");
    scanf("%f",&fWeightApple);
    printf("How many kilograms of Cherries do you want?\n");
    scanf("%f",&fWeightCherry);
    
    /* Values for tests
    float fWeightTomato = 1.99;
    float fWeightCucumber = 1.5;
    float fWeightApple = 1.2;
    float fWeightCherry = 3;*/
    
    float fTotalTomato = fWeightTomato * fPriceTomato;
    float fTotalCucumber = fWeightCucumber * fPriceCucumber;
    float fTotalApple = fWeightApple * fPriceApple;
    float fTotalCherry = fWeightCherry * fPriceCherry;
    float fTotal = fTotalTomato + fTotalCucumber + fTotalApple + fTotalCherry;
    
    printf("\n\n----------------------------------------------\n");
    printf("Name     \tPrice\t Kg\tSubtotal\n");
    printf("----------------------------------------------\n");
    printf("Tomatoes \t%5.2f\t%5.2f\t%8.2f\n", fPriceTomato, fWeightTomato, fTotalTomato);
    printf("Cucumbers\t%5.2f\t%5.2f\t%8.2f\n", fPriceCucumber, fWeightCucumber, fTotalCucumber);
    printf("Apples   \t%5.2f\t%5.2f\t%8.2f\n", fPriceApple, fWeightApple, fTotalApple);
    printf("Cherries \t%5.2f\t%5.2f\t%8.2f\n", fPriceCherry, fWeightCherry, fTotalCherry);
    printf("----------------------------------------------\n");
    printf("TOTAL:   \t\t\t%8.2f\n", fTotal);
    printf("----------------------------------------------\n");
    printf("Thank you for visiting our grocery!\n");
    
    return 0;
}

