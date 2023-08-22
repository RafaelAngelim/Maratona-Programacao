#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, qtd;
    vector<int>bragas;
    cin >> N;
    for(int c = 0; c< N; c++){
        cin >> qtd;
        bragas.push_back(qtd);}
    sort(bragas.begin(), bragas.end());
    int count = 1;
    for(int j = 0; j < N-1; j++){
        if(bragas[j] != bragas[j+1]){
            count++;}}
    cout << count << endl;

    return 0;
}
