#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, squares;
    cin >> t;

    for (long long int i = 0; i < t; i++) {
        cin >> n;
        squares = 0;
        for (long long int i = 1; i <= n; i++) {
            squares += ceil(i / 2);
        }
        long long int test = sqrt(squares);
        if (test * test == squares) {
            cout << test << endl;
        } else if (test * test > squares) {
            cout << (test - 1) << endl;
        } else {
            cout << test + 1 << endl;
        }
    }

    return 0;
}