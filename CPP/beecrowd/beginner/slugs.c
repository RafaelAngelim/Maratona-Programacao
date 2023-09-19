
#include <stdio.h>
int main() {
    int qtd;
    while(scanf("%d",&qtd)!=EOF) {
        int great=1,val,row=1;
        for(int i = 0; i < qtd; i++) {
            scanf("%d ",&val);
            if(val > great) {
                great = val;
                if(great >= 20) row=3;
                else{if(great >= 10) row=2;}
            }
        }
        printf("%d\n",row);
    }
    return 0;
}