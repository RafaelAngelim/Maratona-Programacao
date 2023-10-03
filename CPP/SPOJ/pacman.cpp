#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int spr = 0, way = 1, con = 0, mx = 0;
    char board[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){cin >> board[i][j];}
    }

    for(int c = 0; c < N; c++){
        for(int k = 0; k < N; k++){
            if(board[c][spr] == 'o')con++;
            else if(board[c][spr] == 'A')con=0;
            if(con > mx) mx = con;
            spr += way;
        }
        if(spr == N){
            way = -1;
            spr--;
        }
        else{
            way = 1;
            spr++;
        }
    }
    cout << mx << endl;
    return 0;

    
}
