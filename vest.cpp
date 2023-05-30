#include <string>
#include <iostream>
using namespace std;

int main(){
    
    int size;
    string gab, answ;
    cin >> size >> gab >> answ;
    int correct = 0 ;
    for(int i = 0; i < size, i++){
        if(gab[i] == answ[i]){correct++;}


    }
    cout << correct 
    return 0;
}
