#include <iostream>
using namespace std;

int main(){
    int q;
    cin >> q;
    int carrots[q][q];
    for(int c = 0; c < q; c++){for(int j = 0; j < q; j++){cin >> carrots[c][j];}}
    int z, p1, o1, p2, o2;
    int count = 0;
    cin >> z;
    for(int k = 0; k < z; k++){
    cin >> p1 >> o1 >> p2 >> o2;
    for(int l = p1-1; l <= p2-1; l++){
    for(int c = o1-1; c <= o2-1; c++){
            count += carrots[l][c];
            carrots[l][c] = 0;
            }
        }
    }
    cout << count << endl;

    return 0;
}
