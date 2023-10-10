#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int M, cnt = 0, li, ri;
    string S;
    cin >> S >> M;
    vector<int>ans;
    
    ans.push_back(0);

    for(int c = 0; c < S.size()-1; c++){
        if(S[c] == S[c+1]) cnt++;
        ans.push_back(cnt);
    }
    for(int i = 0; i < M; i++){
        cin >> li >> ri;
        cout << ans[ri-1] - ans[li-1] << endl;
    }

    return 0;
}
