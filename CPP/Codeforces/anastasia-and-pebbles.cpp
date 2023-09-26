#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

int main(){
    double N, K, peb, bilbo = 0;
    cin >> N >> K;

    for(int i = 0; i < N; i++){ 
        cin >> peb; 
        bilbo += ceil(peb / K);}
    
    int time = ceil(bilbo / 2);
    cout << time << endl;

    return 0;

}
