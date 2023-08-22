#include <stdio.h>

int main(){
    
    int fri, bottle, lbo, limes, slices, salt, ml, mp, numbsl, sau, quantity, drinks;
    scanf("%d %d %d %d %d %d %d %d", &fri, &bottle, &lbo, &limes, &slices, &salt, &ml, &mp);

    
    numbsl = limes * slices;
    quantity = bottle * lbo / ml;
    sau = salt / mp;

    if(quantity <= numbsl && quantity <= sau ){drinks = quantity / fri;  }
    else if(numbsl <= quantity && numbsl <= sau){drinks = numbsl / fri;}
    else if(sau <= quantity && sau <= numbsl){drinks = sau / fri;}

    printf("%d\n", drinks);

    return 0;

}    
