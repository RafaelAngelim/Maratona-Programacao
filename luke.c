#include <stdio.h>

int main(){
    
    double largo, pos, vel1, vel2;

    double answer;
    
    scanf("%lf %lf %lf %lf", &largo, &pos, &vel1, &vel2);

    answer = (pos-largo)/(vel2+vel1);

    printf("%.20f\n", answer);

    return 0;

}
