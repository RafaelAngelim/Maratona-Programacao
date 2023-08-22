#include <iostream>
using namespace std;

int main(){

    int test, i, way, curve, L, x0 , x1, x2, y0, y1, y2;
    cin >> test;
    test--;
    cin >> x0 >> y0;
    cin >> x1 >> y1;

    while (i < test){
        cin >> x2 >> y2;
        if(x1 != x0){
            if(x1 > x0){way = 1;}
            else if(x1 < x0){way = -1;}
            if(y2 != y1){
                if(y2 > y1){curve = 2;}
                if(y2 < y1){curve = -2;}

            }
        }
        if(y1 != y0){
            if(y1 > y0){way = 2;}
            else if(y1 < y0){way = -2;}
            if(x2 != x1){
                if(x2 > x1){curve = 1;}
                if(x2 < x1){curve = -1;}
            
        }}
        if(way == 1 && curve == 2){L++;}
        else if(way == -1 && curve == -2){L++;}
        else if(way == 2 && curve == -1){L++;}
        else if(way == -2 && curve == 1){L++;}
        x0 = x1;
        x1 = x2;
        y0 = y1;
        y1 = y2;
        i++;
    }
    cout << L << endl;
    return 0;
}
