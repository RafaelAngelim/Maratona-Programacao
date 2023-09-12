#include <iostream>
using namespace std;
int main(){
    int i,j, team = 0;
    cin >> i >> j;
    
    while(i + j >= 3 && i > 0 && j > 0){
        if(i <= j){
            i -= 1;
            j -= 2;
        }
        else{
            i -= 2;
            j -= 1;

        }
        team++;
    }
    cout << team << endl;
    return 0;
}
