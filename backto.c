#include <stdio.h>

int main(){
    
    int vel, time, result;

    while(scanf("%d %d",&vel, &time) == 2){

    result = time*vel*2;

    printf("%i\n",result);
    }
    return 0;



}
