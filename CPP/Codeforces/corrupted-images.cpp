#include <iostream>
using namespace std;

int main(){
    int cases, row, columns;
    char num;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> row >> columns;
        int c1 = 0;
        char image[row][columns];
        for(int j = 0; j < row; j++){
            for(int c = 0; c < columns; c++){
                cin >> num;
                if(num == '1') c1++;
                image[j][c] = num;
            }
        }
        int p = (row * 2) + ((columns-2) * 2);
        if(c1 >= p){
            int sinaldatim = 0;
            for(int a = 0; a < row; a++){
                if(image[a][0] == '0') sinaldatim++;
                if(image[a][columns-1] == '0') sinaldatim++;
            }
            for(int b = 1; b < columns-1; b++){
                if(image[0][b] == '0') sinaldatim++;
                if(image[row-1][b] == '0') sinaldatim++;
            }
            cout << sinaldatim << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}
