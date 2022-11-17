#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, temp, maxElement, dummy, unique;

    cin >> t;

    for (int i = 0; i < t; i++) {
        unique = 0;
        cin >> n;
        if (n == 1) {
            cin >> dummy;
            cout << "0" << endl;
            continue;
        }

        int freq[n];
        fill_n(freq, n, 0);
        for (int i = 0; i < n; i++) {
            cin >> temp;
            // Index in freq is equal to actual number-1 and value is freq
            freq[(temp - 1)]++;
        }

        maxElement = *max_element(freq, freq + n);
        for (int i = 0; i < n; i++) {
            freq[i] > 0 ? unique += 1 : unique;
        }

        cout << max(min(maxElement, unique - 1), min(maxElement - 1, unique))
             << endl;
    }

    return 0;
}