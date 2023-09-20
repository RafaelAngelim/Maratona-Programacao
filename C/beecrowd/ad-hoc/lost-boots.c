#include <string.h>
#include <stdio.h>

int main(){
    char L;
    int N, M, pair;
    int shoe[61][2];

    while(scanf("%d", &N) != EOF){
        memset(shoe, 0, sizeof(shoe));

        for(int i = 0; i < N; ++i){
            scanf("%d %c\n", &M, &L);
            ++shoe[M][L == 'E'];
        }
        pair = 0;
        for(int i = 30; i < 61; ++i)pair += (shoe[i][0] < shoe[i][1]) ? shoe[i][0] : shoe[i][1];
        printf("%d\n", pair);
    }

    return 0;
}