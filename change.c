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
        printf("\n---Change---\n");
        calcChange(chDiff);
    }

}

void calcChange(float due){

    float C_VALUE[10] = {100,50,20,10,5,1,0.25,0.10,0.05,0.01};
    char C_WORD[10][20] = {"$100 Dollar Bills","$50 Dollar Bills","$20 Dollar Bills",
    "$10 Dollar Bills","$5 Dollar Bills","$1 Dollar Bills","Quarters","Dimes",
    "Nickels","Pennies"};

    int v = 0;
    int C_COUNT = 0;
    while (v < sizeof(C_VALUE) / sizeof(*C_VALUE)){
	    if (due - C_VALUE[v] >= 0){
		    due -= C_VALUE[v];
		    C_COUNT += 1;
		    continue;
	    }

	    else if (C_COUNT > 0){
		    printf("%d %s\n",C_COUNT,C_WORD[v]);
		    C_COUNT = 0;
		    v++;
		    continue;
	    }

	    else
		    v++;
}
}

int main(){
    calcMoney();
    return 0;
}
