#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N, M, b, a, v;
    cin >> N >> M;
    int library[N];
    for(int i = 0; i < N; i++) cin >> library[i];

    for(int c = 0; c < M; c++){
        cin >> b >> a >> v;
        b--; 
        a--; 
        v--;
        int cL = 0, cR = 0;
        for(int i = b; i < v; i++){if(library[i] > library[v]){cL++;}}
        for(int f = v; f <= a; f++){if(library[f] < library[v]){cR++;}}
        if(cL == cR) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
