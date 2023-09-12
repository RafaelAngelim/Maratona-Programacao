#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, newC;
    cin >> N;
    vector<int>row;
    for(int i = 0; i < N; i++){
        cin >> newC;
        row.push_back(newC);
    }
    int round = 0, st = 0, end = N-1, ser = 0, dim = 0;
    
    while(st <= end){
        if(row[st] > row[end]){
            if(round == 0){ser += row[st]; round++;}
            else{dim += row[st]; round--;}
            st++;
        }
        else{
            if(round == 0){ser += row[end]; round++;}
            else{dim += row[end]; round--;}
            end--;
        }
    }

    cout << ser << " " << dim << endl;

    return 0;
    }
