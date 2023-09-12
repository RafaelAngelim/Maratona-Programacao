#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int x){
    bool prime = true;
    for(int k = 2; k <= sqrt(x); k++){
        if(x % k == 0){
            prime = false;
        }
    }
    return prime;
}

int main(){
    string word;
    while(cin >> word){
        int total = 0;
        int size = word.size();
        for(int i = 0; i < size; i++){
            char apl = 65, abc = 97;
            int num1 = 1, num2 = 27;
            for(int j = 0; j < 26; j++){
                if(word[i] == abc){
                    total += num1;
                }
                if(word[i] == apl){
                    total += num2;
                }
                apl++; abc++; num1++; num2 ++;
            }
        }
        if(isPrime(total)) cout << "It is a prime word." << endl;
        else cout << "It is not a prime word." << endl;
    }

    return 0;
}




