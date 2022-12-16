#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> digits;
    string temp;
    int t, length;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> length;
        cin >> temp;

        // digits has distinct digits
        for (int j = 0; j < length; j++) {
            digits.insert((int) temp[j]);
        }

        
    }

    return 0;
}