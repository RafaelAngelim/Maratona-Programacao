#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int qty, L, beg = 0, end = 0, bet = 0;
    double D;
    cin >> qty >> L;
    int street[qty];
    for(int i = 0; i < qty; i++) cin >> street[i];
    int co = sizeof(street) / sizeof(street[0]);
    sort(street, street + co);
    
    int dist = 0, pedroA = 0;
    for(int j = 0; j < qty-1; j++){
        dist = street[j+1] - street[j];
        if(dist > pedroA) pedroA = dist; 
    }
    
    beg = street[0];
    end = L - street[qty-1];
    bet = pedroA / 2;
    if(pedroA == 0 && beg == 0 && end == 0) D = 0.5; 
    else if(bet >= beg && bet >= end) D = pedroA / 2.0; 
    else if(beg >= bet && beg >= end) D = beg; 
    else if(end >= bet && end >= beg) D = end; 
    
    cout << fixed << setprecision(10) << D << endl;

    return 0;
}


