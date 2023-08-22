#include <iostream>
#include <string>
using namespace std;

int main(){
    int size;
    string letters;
    cin >> size >> letters;
    int piticas = 0;    
    for(int i = 1; i < size; i++){
        if(letters[i-1] == letters[i]){
                piticas++;
            
        }
    
    }
    cout << piticas;
    return 0;
}
