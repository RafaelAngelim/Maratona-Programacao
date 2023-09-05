#include <iostream>
#include <vector>
using namespace std;

vector<int>houses;
int midmid(int key, int mid, int low){
    while(mid > low && key == houses[mid-1]) mid--;
    return mid;
    } 

int binary(int key, int high, int low){
    if(low > high || houses[low] > key || houses[high] < key) return -1;
    else{
        while(low <= high){
            int mid = (high + low) / 2;
            if(houses[mid] > key) high = mid - 1;
            else if(houses[mid] < key) low = mid + 1;
            else return midmid(key, mid, low);
            } return -1;}}

int main(){
    int N, K, neww;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> neww;
        houses.push_back(neww);
    }
    cin >> K;
    int high = N-1, low = 0;
    int buzz, key;
    for(int j = 0; j < N; j++){
        key = K - houses[j];
        buzz = binary(key, high, low);
        if(buzz > 0){
            printf("%d %d\n", houses[j], key);
            break;
        }
    }

    return 0;
}



