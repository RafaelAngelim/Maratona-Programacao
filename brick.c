#include<stdio.h>




int main(){

    int tests;
    scanf("%d", &tests);

    int xis, isplon, ze;
    for(isplon=1; isplon <= tests; isplon++){
        scanf("%d", &xis);
        int age, captain, mid;
        captain = age;
        mid = (xis-1)/2; 
        for(ze=0;ze<xis;ze++){
            scanf("%d", &captain);
            if(ze == mid){
                mid = captain;
                }
            }
    printf("Case %d: %d\n", isplon, mid);
        }
    return 0;
    }








