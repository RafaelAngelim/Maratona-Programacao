#include <stdio.h>

int main(){
    int i;
    int n;
    int greater;

    i=1;
    greater=0;
    for(n = 0 ; i != 0 ; n++){

        scanf("%d", &i);

        if(i > greater){greater = i;}
    }
    printf("%d\n", greater);


    return 0;
}
