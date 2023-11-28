#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>seq;

int verify(int key, int mid, int low){
    while(mid > low && key == seq[mid-1]) mid--;
    return mid;
}


int binSearch(int high, int low, int key){
    if(low > high || seq[low] > key || seq[high] < key) return -1;
    else{
        while(low <= high){
            int mid = (high+low)/2;
            if(seq[mid] > key) high = mid -1;
            else if(seq[mid] < key) low = mid+1;
            else return verify(key,mid,low);
        }
        return -1;
    }
}

int main(){
    vector<int>nums;
    int N, K, curr;
    cin >> N >> K;
    for(int c = 0; c < N; c++){ 
        cin >> curr;
        nums.push_back(curr);
    }
    
    sort(nums.begin(),nums.end());

    for(int c = 0; c < N; c++){
        if(nums[c] % K != 0) seq.push_back(nums[c]);
        else{
            int high = seq.size() - 1;
            int low = 0;
            curr = binSearch(high, low, nums[c]/K);
            if(curr < 0) seq.push_back(nums[c]);
        }
    }

    cout << seq.size() << endl;
    
    return 0;
}
