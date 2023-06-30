#include <iostream>
using namespace std;

int main(){
	int n, i, j, s = 0, sl = 0, sc = 0, s1 = 0, s2 = 0;
	cin >> n;
	int qua[n][n];
	for(int a = 0; a < n; a++){for(int b = 0; b < n; b++){cin >> qua[a][b];}}
	for(i = 0; i < n; i++){s += qua[0][i];}
	for(j = 0; j < n; j++){
		sl = 0;
		for(i = 0; i < n; i++){sl += qua[j][i];}
		if(sl != s) break;
	}
	for(i = 0; i < n; i++){
		sc = 0;
		for(j = 0; j < n; j ++){sc += qua[j][i];}
		if(sc != s) break;
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if((i + j) == (n - 1)){s1 += qua[j][i];}
		}	
	}

	for(int v = 0; v < n; v++){s2 += qua[v][v];}
	if(s == sl && s == sc && s == s1 && s == s2) cout << s << endl;
	else cout << "-1" << endl;

	return 0;

}
