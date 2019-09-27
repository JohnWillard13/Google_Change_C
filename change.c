#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float getCost(void);
float getPay(void);
//void calcMoney();
//void calcChange(remaining);
//void exitRun();
//void clearScreen();

float getCost(void){
    float cost;
    printf("Please enter the cost of the item: ");
    scanf("%f",&cost);
    while(cost <= 0){
        printf("Cost must be greater than zero. Enter a new cost: ");
        scanf("%f",&cost);
    }
    return cost;
}

float getPay(void){
    float pay;
    printf("Please enter the cost of the item: ");
    scanf("%f",&pay);
    while(pay <= 0){
        printf("Cost must be greater than zero. Enter a new cost: ");
        scanf("%f",&pay);
    }
    return pay;
}

void main(){
    float cost = getCost();
    float pay = getPay();
    float diff = cost - pay;
    printf("%.2f\n",diff);
    printf("Test");
    int choice;
    scanf("%d",&choice);
}