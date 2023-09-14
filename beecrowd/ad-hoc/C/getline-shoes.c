#include <string.h>
#include <stdio.h>

int main(){
    char sex, string[1000];
    int cases, wantedS, H, W, size;
    cases = 0;
    while (scanf("%d\n", &wantedS) != EOF){
        if (cases > 0)printf("\n");
        scanf("%[^\n]\n", &string);
        H = W = 0;
        for (int i = 0; i < strlen(string); i += 5){
            size = 10 * (string[i] - '0') + (string[i + 1] - '0');
            sex = string[i + 3];
            if (size == wantedS){
                if (sex == 'F')W++;
                else H++;
            }
        }
        printf("Caso %d:\n", ++cases);
        printf("Pares Iguais: %d\nF: %d\nM: %d\n", W + H, W, H);
    }
    return 0;
}