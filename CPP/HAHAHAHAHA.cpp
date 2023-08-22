#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string HAHAHAHAHHAHAHAHAHAHAHAHAHAHA;
    vector<char>vogal;
    vector<char>tras;
    cin >> HAHAHAHAHHAHAHAHAHAHAHAHAHAHA;
    for(int i = 0; i < HAHAHAHAHHAHAHAHAHAHAHAHAHAHA.size(); i++){
        if(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i] == 'a') vogal.push_back(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i]);
        else if(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i] == 'e') vogal.push_back(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i]);
        else if(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i] == 'i')vogal.push_back(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i]);
        else if(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i] == 'o')vogal.push_back(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i]);
        else if(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i] == 'u')vogal.push_back(HAHAHAHAHHAHAHAHAHAHAHAHAHAHA[i]);}
    for(int j = vogal.size()-1; j >= 0; j--)tras.push_back(vogal[j]);
    int count = 0;
    for(int k = 0; k < vogal.size(); k++){
        if(vogal[k] == tras[k])count++;
    }
    if(count == vogal.size()){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}
