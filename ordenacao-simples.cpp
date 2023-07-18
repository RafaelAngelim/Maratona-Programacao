#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, wen; vector<int>sq; cin >> N;
    for(int c = 0; c < N; c++){cin >> wen; sq.push_back(wen); }
    
    sort(sq.begin(), sq.end());
    
    for(int k = 0; k < N; k++){if(k == N-1) cout << sq[k] << endl; else cout << sq[k] << " ";}

    return 0;
}