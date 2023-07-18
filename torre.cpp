#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int tab[N][N];
    int col[N], lin[N];
    for(int c = 0; c < N; c++){for(int k = 0; k < N; k++){cin >> tab[c][k];}}
    for(int c = 0; c < N; c++){int sum1 = 0; for(int k = 0; k < N; k++){ sum1 += tab[c][k]; if(k == N-1){lin[c] = sum1;}}}
    for(int k = 0; k < N; k++){int sum2 = 0; for(int c = 0; c < N; c++){sum2 += tab[c][k];  if(c == N-1){col[k] = sum2;}}}
    int maior = 0, s3;
    for(int c = 0; c < N; c++){for(int k = 0; k < N; k++){s3 = (lin[c] + col[k]) - (tab[c][k] * 2);
            if(s3 > maior){
                maior = s3;
            }
        }
    }
    cout << maior << endl;

    return 0;
}
