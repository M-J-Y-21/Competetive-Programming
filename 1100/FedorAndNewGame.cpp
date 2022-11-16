#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, fedorArmy, count = 0;
    cin >> n >> m >> k;

    int armies[m];
    // Fill array with zeros more c++ like than memset
    fill(armies, armies + m, 0);

    for (int i = 0; i < m; i++) {
        cin >> armies[i];
    }

    cin >> fedorArmy;

    int comparison = 0;
    for (int i = 0; i < m; i++) {
        // ^ - for xor operation to get the differences of armies and than
        // __builtin_popcount to get the count of 1s
        comparison = __builtin_popcount(fedorArmy ^ armies[i]);
        if (comparison <= k) {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}