#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, c1 = 0;
    int letrinhasemordem[26];
    char abc = 97, ABC = 65;
    string cadeira; 
    cin >> N >> cadeira;
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < N; j++){
            if(cadeira[j] == abc){
                letrinhasemordem[i] = 1;
                break;
            }
            else if(cadeira[j] == ABC){
                letrinhasemordem[i] = 1;
                break;
            }
            else{
                letrinhasemordem[i] = -1;   
            }
        }    
        abc++;
        ABC++;
    }
    for(int k = 0; k < 26; k++){ 
        if(letrinhasemordem[k] == 1) c1++;
    }
    if(c1 != 26) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
