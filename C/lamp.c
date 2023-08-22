#include <stdio.h>

int main(){

    int n, each, i, a=0, b=0;

    scanf("%d", &n);

    for(i = 0; i < n ; i++){
        scanf("%d", &each);
        if(each == 1){a++;}
        if(each == 2){
            a++;
            b++;
        }
    }

    if(a % 2 == 0){a = 0;}
    else{a = 1;}
    if(b % 2 == 0){b = 0;}
    else{b=1;}
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;



}
