#include <iostream>
using namespace std;

bool saoPrimos(int i, int j){
    bool saoPrimos = true;
    for(int c = 2; c <= i; c++){if(i % c == 0 && j % c == 0){
            saoPrimos = false;
            break;
        }}
    return saoPrimos;}

int main(){
    int N, i, j, frac = -1;
    cin >> N;
    for(int c = 1; c < (N/2)+1; c++){int k = N-c;
        if(saoPrimos(c, k) == true && c / k >= frac){
            frac = c / k; i = c; j = k;}
    } 
    cout << i << " " << j << endl;
    return 0;
    }
