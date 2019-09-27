#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

float getCost(void);
float getPay(void);
void calcMoney();
//void calcChange(remaining);
//void exitRun();
//void clearScreen();

float getCost(void){
    float cost;
    while(1){
        printf("Please enter the cost: ");
        scanf("%f",&cost);

        if (!isdigit(cost)){
            printf("Value must be a number.");
            continue;
        }

        else if (cost <= 0){
            printf("Cost must be greater than zero.");
            continue;
        }

        else 
            break;
        
    }

    return cost;
}

float getPay(void){
    float pay;
    while(1){
        printf("Please enter the cost: ");
        scanf("%f",&pay);

        if (!isdigit(pay)){
            printf("Value must be a number.");
            continue;
        }

        else if (pay <= 0){
            printf("Cost must be greater than zero.");
            continue;
        }

        else 
            break;
        
    }

    return pay;
}

void calcMoney(){
    float cost = getCost();
    float pay = getPay();

    if (cost > pay){
        float diff = cost - pay;
        printf("Not enough money to cover the cost. %.2f is still needed to cover the cost.",diff);
    }
    else if (cost == pay){
        printf("Cost and pay are even. No change needed.");
    }

    else {
        printf("Calculate how much change is needed.");
    }

}

void main(){
    calcMoney();
}