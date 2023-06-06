
#include <iostream>
using namespace std;

int main(){
    int prin, a = 1;
    cin >> prin;
    while(prin > 0){
        a = a * prin;
        prin -= 1;
    }
    cout << a << endl;

    return 0;
}


}
