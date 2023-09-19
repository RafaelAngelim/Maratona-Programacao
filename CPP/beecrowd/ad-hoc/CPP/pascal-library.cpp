#include <iostream>
using namespace std;

int main(){
    int N, D;
    while(cin >> N >> D){
        if(N == 0 && D == 0) break;
        int serv[D][N];
        for(int i = 0; i < D; i++){
            for(int j = 0; j < N; j++) cin >> serv[i][j];
        }
        int m = 0;
        for(int i = 0; i < N; i++){
            int sum = 0;
            for(int j = 0; j < D; j++){
                sum += serv[j][i];
            }
            if(sum > m){
                m = sum;
            }
        }
        if(m == D) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
