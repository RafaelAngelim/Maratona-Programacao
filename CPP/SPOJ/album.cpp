SPOJ submission 31590807 (CPP) plaintext list. Status: AC, problem ALBUM12, contest SPOJBR. By rafaelangelim (RafaelAngelim), 2023-07-10 10:24:30.

    #include <iostream>
    using namespace std;
     
    int main(){
        int x, y;
        cin >> x >> y;
        int b1, h1, b2, h2;
        cin >> b1 >> h1;
        cin >> b2 >> h2;
        bool possible;
        
        if(b1+b2 <= y && h1 <= x && h2 <= x) possible = true;
        else if(b1+b2 <= x && h1 <= y && h2 <= y) possible = true;
        else if(h1+h2 <= x && b1 <= y && b2 <= y) possible = true;
        else if(h1+h2 <= y && b1 <= x && b2 <= x) possible = true;
        else if(b1+h2 <= x && h1 <= y && b2 <= y) possible = true;
        else if(b1+h2 <= y && h1 <= x && b2 <= x) possible = true;
        else if(b2+h1 <= x && h2 <= y && b1 <= y) possible = true;
        else if(b2+h1 <= y && h2 <= x && b1 <= x) possible = true;
        else possible = false;
        if(possible == true) cout << "S" << endl;
        else cout << "N" << endl;
        return 0;
    }
     
