#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    double m[12][12];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) scanf("%lf", &m[i][j]);
    }
    double dia1 = 0, dia2 = 4, sum = 0;
    for (int i = 1; i <= 10; i++) {
        if (i <= 5) {
            for (int j = 0; j <= dia1; j++) sum += m[i][j];
            dia1++;
        } 
        else if (i >= 6) {
            for (int j = 0; j <= dia2; j++) sum += m[i][j];
            dia2--;
        }
    }
    if (c == 'S') printf("%.1lf\n", sum);
    else if (c == 'M') printf("%.1lf\n", sum / 30);
    return 0;
}
