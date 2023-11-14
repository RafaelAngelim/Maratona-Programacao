#include <iostream>

#include <cmath>

using namespace std;



int main() {

    int T, ans;

    cin >> T;

    while(T--){

        double N;

        cin >> N;

        ans = (-1 + sqrt(1+(8*N)))/2;

        cout << ans << endl;

    }

	return 0;

}


