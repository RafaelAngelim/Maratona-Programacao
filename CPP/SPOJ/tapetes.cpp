#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int l, n;
    long long max;
    cin >> l >> n;
    max = pow((l-(n-1)),2) + (n-1);
    cout << max << endl;

    return 0;
}
    
