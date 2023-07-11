#include <string>
using namespace std;
#include <iostream>
   
   int main(){
    string guardachuva;
    while(cin >> guardachuva){
        for(int c = 0; c < guardachuva.size(); c++){
            if(guardachuva[c] == 'A' || guardachuva[c] == 'B' || guardachuva[c] == 'C')guardachuva[c] = '2';
            else if(guardachuva[c] == 'D' || guardachuva[c] == 'E' || guardachuva[c] == 'F') guardachuva[c] = '3';
            else if(guardachuva[c] == 'G' || guardachuva[c] == 'H' || guardachuva[c] == 'I') guardachuva[c] = '4';
            else if(guardachuva[c] == 'J' || guardachuva[c] == 'K' || guardachuva[c] == 'L') guardachuva[c] = '5';
            else if(guardachuva[c] == 'M' || guardachuva[c] == 'N' || guardachuva[c] == 'O') guardachuva[c] = '6';
            else if(guardachuva[c] == 'P' || guardachuva[c] == 'Q' || guardachuva[c] == 'R' || guardachuva[c] == 'S') guardachuva[c] = '7';
            else if(guardachuva[c] == 'T' || guardachuva[c] == 'U' || guardachuva[c] == 'V') guardachuva[c] = '8';
            else if(guardachuva[c] == 'W' || guardachuva[c] == 'X' || guardachuva[c] == 'Y' || guardachuva[c] == 'Z') guardachuva[c] = '9';
            

            
        }
    for(int i = 0; i < guardachuva.size(); i++){
        if(i == guardachuva.size() -1) cout << guardachuva[i] << endl;
        else cout << guardachuva[i];

    }
    }
    return 0;
   }