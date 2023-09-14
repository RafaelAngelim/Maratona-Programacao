#include <stdio.h>

int main(){
    int has[21];
    int B, N, own, rece, val, pos;

    while(scanf("%d %d", &B, &N)){
        if(!B && !N)    break;
        for(int i = 1; i <= B; ++i)scanf("%d", &has[i]);
        for(int i = 0; i < N; ++i){
            scanf("%d %d %d", &own, &rece, &val);
            has[own] -= val;
            has[rece] += val;
        }
        pos = 1;
        for(int i = 1; i <= B; ++i){
            if(has[i] < 0){
                pos = 0;
                break;
            }
        }
    printf("%c\n", pos ? 'S' : 'N');
    }
    return 0;
}