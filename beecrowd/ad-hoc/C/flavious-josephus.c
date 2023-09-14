#include <stdio.h>

int surv(int N, int K){
    if(N == 1)  return 0;
    return (surv(N - 1, K) + K) % N;
}
int main(){
    int NC, N, K;
    scanf("%d", &NC);
    for(int i = 1; i <= NC; ++i){
        scanf("%d %d", &N, &K);
        printf("Case %d: %d\n", i, surv(N, K) + 1);
    }
    return 0;
}