#include <stdio.h>
int main()
{
    double sum=0.0, M[12][12];
    char O;
    int p=11;
    scanf("%c", &O);
    for(int i = 0;i<=11;i++){
        for(int j=0; j<=11; j++) scanf("%lf", &M[i][j]);
    }
    for(int c=1; c<=11;c++){
        for(int k=11; k >= p;k--)
            sum+=M[c][k];
            p--;
    }
    if(O=='S') printf("%.1lf\n",sum);
    else if(O=='M'){
        sum=sum/66.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}
