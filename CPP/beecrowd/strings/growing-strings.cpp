#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool origin(const string& s1, const string& s2) {
    int i = 0, j = 0;
    while (i < s1.length() && j < s2.length()) {
        if (s1[i] == s2[j]) i++;
        j++;
    }
    return i == s1.length();
}

int main() {
    int N;
    int cases = 1;
    while (cin >> N && N != 0) {
        vector<string> plants(N);
        for (int i = 0; i < N; i++) cin >> plants[i];
        vector<int> dp(N, 1);
        for (int i = 1; i < N; i++) {
            for (int j = 0; j < i; j++) {
                if (origin(plants[j], plants[i])) dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        int maxs = *max_element(dp.begin(), dp.end());
        cout << "Case " << cases << ": " << maxs << endl;
        cases++;
    }

    return 0;
}
