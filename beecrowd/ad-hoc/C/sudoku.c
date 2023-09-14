#include <stdio.h>

int sudoku[9][9];

int line(int x){
    int num[10];
    for(int i = 0; i < 10; i++)num[i] = 0;
    for(int i = 0; i < 9; i++){
        if(num[sudoku[x][i]])   return 0;
        num[sudoku[x][i]] += 1;
    }
    return 1;
}

int collumn(int x){
    int num[10];
    for(int i = 0; i < 10; i++)num[i] = 0;
    for(int i = 0; i < 9; i++){
        if(num[sudoku[i][x]])   return 0;
        num[sudoku[i][x]] += 1;
    }
    return 1;
}

int block(int x){
    int num[10];
    int line = 3*(x/3), collumn = 3*(x%3);
    for(int i = 0; i < 10; i++)num[i] = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(num[sudoku[line + i][collumn + j]])  return 0;
            num[sudoku[line + i][collumn + j]] += 1;
        }
    }
    return 1;
}

int main(){
    int n;
    char* answ;
    scanf("%d", &n);
    for(int k = 1; k <= n; k++){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &sudoku[i][j]);
            }
        }

        printf("Instancia %d\n", k);

        answ = "SIM";
        for(int i = 0; i < 9; i++){
            if(!line(i) || !collumn(i) || !block(i)){
                answ = "NAO";
                break;
            }
        }

        printf("%s\n\n", answ);
    }

    return 0;
}