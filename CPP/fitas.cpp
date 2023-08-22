#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size, t = 0;
    cin >> size;
    vector<int>str;
    for(int i = 0; i < size; i++){
        int n;
        cin >> n;
        str.push_back(n);}
    while(t <= 9){
        for(int i = 0; i < size; i++){
            if(str[i] == t){
                if(str[i-1] == -1) str[i-1] = t + 1;
                if(str[i+1] == -1) str[i+1] = t + 1;}}
        t++;}
    for(int i = 0; i < size; i++){
        if(str[i] == 10 || str[i] == -1) str[i] = 9;}
    for(int i = 0; i < size;i++){
        if(i != size -1) cout << str[i] << " " ;
        else cout << str[i] << endl;}
    return 0;
}
