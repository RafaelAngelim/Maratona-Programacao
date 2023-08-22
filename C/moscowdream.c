#include <stdio.h>

int main(){
    
    int a,b,c,n;

    scanf("%i %i %i %i", &a, &b, &c, &n);
    
    int xis = a > 0 &&  b > 0 && c > 0;
    int isplon = n <= a + b + c;
    int ze = n >=3;

    if(xis && isplon && ze){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;













}

