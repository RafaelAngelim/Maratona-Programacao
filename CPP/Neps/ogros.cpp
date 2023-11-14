#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>points;
    
    int N, M, stren;

    cin >> N >> M;

    int made[N], cat[N-1];

    for(int c = 0; c < N-1; c++){cin >> cat[c];}
    for(int c = 0; c < N; c++){cin >> made[c];}
    for(int c = 0; c < M; c++){
           cin >> stren;
           if(stren < cat[0]) points.push_back(made[0]);
           else if(stren >= cat[N-2]) points.push_back(made[N - 1]);
           else{
              int count = 0, wah = N-1;
              while(count < wah-1){
             if(stren >= cat[count] && stren < cat[count+1]) points.push_back(made[count+1]);
                count++;
              }
            
                
            }
        }
    for(int c = 0; c < M; c++){ 
        cout << points[c] << " ";
    }
    
    cout << endl;
    
    return 0;

}
