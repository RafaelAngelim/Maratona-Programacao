#include <iostream>
#include <string>
using namespace std;

int main(){
    string num;
    cin >> num;
    int i;
    int word = 0;
    for(i = 0; i < num.size(); i++){
        if(num[i] == '4' || num[i] == '7'){
            word++;
        }}
        
        if(word == 7 || word == 4){
            cout << "YES\n";}
        else{
            cout << "NO\n";
            }
        

    return 0;
}
