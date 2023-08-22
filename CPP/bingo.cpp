#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int>num;
vector<int>check;
int cont = 0;

int v(int n1, int b){ 
    int share;
    for(int i = 0; i < b-1; i++){
        for(int j = i; j < b-1; j++){
            share = abs(num[i] - num[j+1]);
        for(int h = 0; h < check.size();h++){
        if(share == check[h]){
            check[h] = -1;
            cont++;
            break;}}}}
    return cont;}

int v2(int n1, int b){ 
    for(int i = 0; i < b; i++){
        for(int j = 0; j <= n1; j++){
            if(num[i] == check[j]){
                check[j] = -1;
                cont++;
                break;}}}
    if(cont < check.size()) cont = v(n1,b);
    return cont;}
int main(){
        int n,b2;
    while(true){
        cin >> n >> b2;
        if(n == 0 && b2 == 0)break;
        num.clear();
        for(int i = 0; i < b2; i++){
            int nu;
            cin >> nu;
            num.push_back(nu);}
        check.clear();
        for(int i = 0; i <= n; i++) check.push_back(i);
        cont = v2(n,b2);
        if(cont == check.size()) cout << 'Y' << endl;
        else cout << 'N' << endl;
        cont = 0;}

    return 0;
}
