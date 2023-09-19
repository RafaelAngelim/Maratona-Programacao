#include <stdio.h>

int main() {
    char O;
    scanf("%c", &O);
    double sum = 0;
    double a[12][12];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &a[i][j]);
            if (j > (11 - i) && j < i) sum += a[i][j];
        }
    }
    if (O == 'S') printf("%.1lf\n", sum); 
    else if (O == 'M') printf("%.1lf\n", sum / 30);
    



    return 0;
}

