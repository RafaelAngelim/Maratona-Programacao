#include <iostream>
#include <vector>
using namespace std;

int main(){

    int days, consecutive = 1 , profit, maxconse = 1;
    cin >> days;
    vector<int>money;

    for(int i = 0; i < days; i++){
        cin >> profit;
        money.push_back(profit);
    }
    for(int l = 0; l < days - 1; l++){
        if(money[l] <= money[l+1]){
            consecutive++;
            if(consecutive > maxconse){
                maxconse = consecutive;
            }
        }
        else{
            consecutive = 1;
        }
    }
    cout << maxconse << endl;
    return 0;

}
