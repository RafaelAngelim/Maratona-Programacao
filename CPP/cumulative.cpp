#include <iostream>
using namespace std;

int main(){
	int n, q, i, j; 
	cin >> n;
	int arr[n];
	for(int c = 0; c < n; c++){cin >> arr[c];}
	cin >> q;
	for(int p = 0; p < q; p++){
		cin >> i >> j;
		int s = 0;
		for(int h = i; h <= j; h++){s += arr[h];}
		cout << s << endl;

	}
	return 0;
}
