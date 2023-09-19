#include <stdio.h>

int main(){
    char name[100];
    int avg = 0, plp = 0, dist;
    while(scanf("%[^\n]", &name) != EOF){
        scanf("%d\n", &dist);
        avg += dist;
        plp++;
    }
    printf("%.1lf\n", (double) avg/plp);
    return 0;
}