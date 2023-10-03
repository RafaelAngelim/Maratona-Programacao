#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int,int>>fights;
    pair<int,int>g;
    bool res = false;
    int S, N, c, k;
    cin >> S >> N;
    for(int i = 0; i < N; i++){
        cin >> c >> k;
        g.first = c;
        g.second = k;
        fights.push_back(g);
    }
    sort(fights.begin(),fights.end());
    for(int i = 0; i < N; i++){
        if(S > fights[i].first){
            res = true;
            S += fights[i].second;
        }
        else{res = false;}
        }
    if(res == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;

}
