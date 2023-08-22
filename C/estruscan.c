#include <stdio.h>
#include <math.h>

int main(){


    int n, i, etruscan, row;
    scanf("%d", &n);

        for(i=1;i<=n;i++){
            long long int etruscan;
            scanf("%lld", &etruscan);
            int row = (-1 +sqrt(1+(8*etruscan)))/2;
            printf("%d\n",row);

        }
     return 0;   
    }
