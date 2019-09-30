#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

float getCost();
float getPay();
void calcMoney();
void calcChange(float remaining);
//void exitRun();
//void clearScreen();

float getCost(){
    float cost;
    while (1){
        printf("Cost: ");
        scanf("%f",&cost);
        printf("\n");
        
        if (cost <= 0){
            printf("Cost must be greater than zero.");
            continue;
        }

        else
            break;
    }
    return cost;
}

float getPay(){
    float pay;
    while (1){
        printf("Given: ");
        scanf("%f",&pay);
        printf("\n");
        
        if (pay <= 0){
            printf("Amount given must be greater than zero.");
            continue;
        }

        else
            break;
    }
    return pay;
}

void calcMoney(){
    float cost = getCost();
    float paid = getPay();

    if (cost > paid){
        float diff = cost - paid;
        printf("Not enough paid. %f still owed.\n",diff);
    }

    else if (cost == paid){
        printf("Cost and paid are even. No change needed.\n");
    }

    else {
        float chDiff = paid - cost;
        printf("---Change---\n");
        calcChange(chDiff);
    }

}

void calcChange(float remaining){

    int v;
    float C_VALUE[] = {100,50,20,10,5,1,0.025,0.10,0.05,0.01};
    char C_WORD[] = {"$100 Dollar Bills","$50 Dollar Bills","$20 Dollar Bills",
    "$10 Dollar Bills","$5 Dollar Bills","$1 Dollar Bills","Quarters","Dimes",
    "Nickels","Pennies"};

    for (v=0 ; v<C_VALUE; v++){
        int C_COUNT = 0;
        while (1){
            if (remaining - C_VALUE[v] >= 0){
                remaining -= C_VALUE[v];
                C_COUNT += 1;
                continue;
            }

            else {
                printf("%d %s\n",C_COUNT,C_WORD[v]);
            }
        }
    }
}

int main(){
    calcMoney();
}