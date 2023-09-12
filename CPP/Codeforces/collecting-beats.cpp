#include <iostream>
using namespace std;
int main(){
    int fingers;
    cin >> fingers;
    char lifewter[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0 ; j < 4; j++){ 
            cin >> lifewter[i][j];}}

    int avatar = 1, contador = 0;
    char gemeos;
    while(avatar < 10){

        for(int x = 0; x < 4; x++){
            for(int c = 0; c < 4; c++){
                if(avatar == 1) gemeos = '1';
                else if(avatar == 2) gemeos = '2';
                else if(avatar == 3) gemeos = '3';
                else if(avatar == 4) gemeos = '4';
                else if(avatar == 5) gemeos = '5';
                else if(avatar == 6) gemeos = '6';
                else if(avatar == 7) gemeos = '7';
                else if(avatar == 8) gemeos = '8';
                else if(avatar == 9) gemeos = '9';
                if(lifewter[x][c] == gemeos) contador++;
            }    
        }
        if(contador > fingers*2){
            cout << "NO" << endl;
            break;
        }
        contador = 0;
        avatar++;

    }
    if(contador == 0) cout << "YES" << endl;
    return 0;

}


