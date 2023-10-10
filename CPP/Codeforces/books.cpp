#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, T;
    vector<int>books;
    int wen, st = 0, sum = 0, qty = 0;
    for(int c = 0; c < N; c++){
        cin >> wen;
        books.push_back(wen);
    }
    for(int i = 0; i < N; i++){
        while(st < N && books[st] + sum <= T){
            sum += books[st]; st++;
        }
        qty = max(qty, st-1); sum -= books[i];
    }
    cout << qty << endl;

    return 0;
}
