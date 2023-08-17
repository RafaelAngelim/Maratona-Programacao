#include <iostream>
#include <vector>
using namespace std;

int main(){
    int A, V, x, y, T = 1;
    vector<int>voo;
    vector<int>jafoi;
    while(cin >> A >> V){
        if(A == 0 && V == 0) break;
        int vis = 0;
        for(int i = 0; i < V; i++){
            cin >> x >> y;
            voo.push_back(x);
            voo.push_back(y);
        }
        int aero[A];
        for(int j = 0; j < A; j++)  aero[j] = 0;
        
        for(int i = 0; i < V*2; i++){
            for(int j = 1; j <= A; j++){
                if(voo[i] == j) aero[j-1]++;
            }
        }
        for(int i = 0; i < A; i++){
            if(aero[i] > vis) vis = aero[i];
        }
        for(int j = 0; j < A; j++){
            if(aero[j] == vis) jafoi.push_back(j+1);
            
        }
        int size = jafoi.size();
        cout << "Teste " << T << endl;
        for(int i = 0; i < size; i++){
            if(i == size-1) cout << jafoi[i] << endl;
            else cout << jafoi[i] << " ";
        }
        cout << endl;
        T++;
        voo.clear();
        jafoi.clear();
    }

    return 0;
}
