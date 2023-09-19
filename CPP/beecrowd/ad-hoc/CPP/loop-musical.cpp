#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, H, maxi;
    vector<int>wa;
    while(cin >> N && N != 0){
        for(int i = 0; i < N; i++){
            cin >> H;
            wa.push_back(H);
        }
        wa.push_back(wa[0]);
        maxi = 0;
        for(int j = 1; j < N; j++){
            if(wa[j] > wa[j-1] && wa[j] > wa[j+1]) maxi++;
            if(wa[j] < wa[j-1] && wa[j] < wa[j+1]) maxi++;
        }
        if(wa[0] > wa[N-1] && wa[0] > wa[1]) maxi++; 
        if(wa[0] < wa[N-1] && wa[0] < wa[1]) maxi++; 
        
        cout << maxi << endl;
        wa.clear();
    }

    return 0;
}
