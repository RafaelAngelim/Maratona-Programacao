#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N, K, p = 0, c = 0, a = 0, r = 0;
    string str;
    cin >> N >> K >> str;
    while(c < N){
        if(str[c] == 'a') a++;
        if(a <= K) r = max(r, c-p+1);
        
        while(a > K){
            if(str[p] == 'a') a--;
            p++;
        }
        c++;
    }
    
    int b = 0, v = 0, o = 0;
    
    while(o < N){
        if(str[o] == 'b') b++;
        if(b <= K) r = max(r, o-v+1);
        while(b > K){
            if(str[v] == 'b') {b--;}
            v++;
        }
        o++;
    }

    cout << r << endl;

    return 0;
}
