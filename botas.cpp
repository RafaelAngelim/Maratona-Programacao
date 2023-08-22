#include <iostream>
using namespace std;
#include <vector>
int main(){
    int numboot, cou = 0;
    cin >> numboot;
    vector<int>D;
    vector<int>E;
    for(int i = 0; i < numboot; i++){
        int size;
        char which;
        cin >> size >> which;
        
        if(which == 'D'){D.push_back(size);}
        else if(which == 'E'){E.push_back(size);}
        
    }

    for(int j = 0; j < D.size(); j++){
        for(int k = 0; k < E.size(); k++){
            if(D[j] == E[k]){
                cou++;
                E[k] = 0;
                break;

            }
        }
    }
    cout << cou << endl;
    return 0;
}
