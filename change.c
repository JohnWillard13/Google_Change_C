#include <stdio.h>
#include <stdlib.h>

int getCost(void);
int getPay(void);
void calcMoney();
void calcChange(remaining);
void exitRun();
void clearScreen();

int getCost(void){
    float cost;
    printf("Please enter the cost of the item: ");
    scanf("%f",&cost);
    while(cost <= 0){
        printf("Cost must be greater than zero. Enter a new cost: ");
        scanf("%f",&cost);
    }
    printf("%f",cost);
    return cost;
}

int main(void){
    getCost();
    return 0;
}