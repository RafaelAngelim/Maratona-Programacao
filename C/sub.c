#include <stdio.h>

int main(){

    int n,j,i;
    scanf("%d %d", &n, &j);
    for (i=0; i < j; i++){
        if(n % 10 == 0){n = n/10;}
        else{n = n-1;}
    }
    printf("%d", n);
    return 0;
}
