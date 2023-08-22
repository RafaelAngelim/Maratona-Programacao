#include <stdio.h>
#include <limits.h>

int main(){
    int fel, roof, hot, wee;
    int price, bed, a, b;
    int min_price = INT_MAX;
    int cost;


    scanf("%d %d %d %d", &fel, &roof, &hot, &wee);

    for(a =0 ; b < hot; a++){
        scanf("%d", &price);
        for(b = 0 ; b < wee; b++){
        if(bed >= fel){
            cost = fel * price;
            if(cost <= roof && min_price > cost){
                min_price = cost;
            }
        }
    }

    }

    if(min_price == INT_MAX){
        printf("stay home\n");
    }
    else{
        print#include <stdio.h>
#include <limits.h>

int main(){
    int fel, roof, hot, wee;
    int price, bed, a, b;
    int min_price = INT_MAX;
    int cost;


    scanf("%d %d %d %d", &fel, &roof, &hot, &wee);

    for(a =0 ; a < hot; a++){
        scanf("%d", &price);
        for(b = 0 ; b < wee; b++){
            scanf("%d",&bed);
            if(bed >= fel){
                cost = fel * price;
                if(cost <= roof && min_price > cost){
                    min_price = cost;
                }
            }
        }

    }

    if(min_price == INT_MAX){
        printf("stay home\n");
    }
    else{
        printf("%d\n",min_price);
    }
    return 0;
}
f("%d\n",min_price);
    }
    return 0;
}
