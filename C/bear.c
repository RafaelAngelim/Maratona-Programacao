#include <stdio.h>

int main(){
    
    int a,b, year;
    year = 0;

    scanf("%d %d", &a, &b);

    while(b >= a){
        a = a*3;
        b = b*2;
        year = year+ 1;
            
    }   

    printf("%d", year);

    return 0;

}
