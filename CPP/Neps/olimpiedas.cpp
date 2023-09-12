#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    int N, M, O, P, B;
    vector<int>country;
    cin >> N >> M;
    int clas[N];

    for(int i = 0; i < N; i++) country.push_back(0);
    
    for(int j = 0; j < M; j++){
        cin >> O >> P >> B;
        country[O-1] += 100;    country[P-1] += 10;     country[B-1] += 1;
    }

    for(int c = 0; c < N; c++)clas[c] = country[c];
        
    sort(country.begin(), country.end(), greater<int>());
    int v = 0;
    for(int g = 0; g < N; g++){
        for(int a = 0; a < N; a++){
                if(v == N) break;
                if(clas[a] == country[g] && clas[a] >= 0){
                    if(v == N - 1) cout << a+1 << endl;
                    else cout << a+1 << " ";
                    v++; clas[a] =- 1;}
        }
    }






    return 0;
}
