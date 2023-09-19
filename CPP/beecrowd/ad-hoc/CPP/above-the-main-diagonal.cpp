#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char opp;
    cin >> opp;
    double squared[12][12], tot = 0.0;
    int count = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> squared[i][j];
            if (i >= 7 && j >= 12 - i && j < i) {
                tot += squared[i][j];
                count++;
            }
        }
    }

    if (opp == 'S') {
        cout << fixed << setprecision(1) << tot << endl;
    } else if (opp == 'M') {
        double avg = (count > 0) ? tot / count : 0.0;
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}
