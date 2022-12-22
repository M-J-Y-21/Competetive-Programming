#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void fastest(int a, int b, int c);

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        fastest(a, b, c);
    }

    return 0;
}

void fastest(int a, int b, int c) {
    int timeE1 = a - 1, timeE2 = abs(c - b) + c - 1;

    if (timeE1 < timeE2) {
        cout << "1" << endl;
    } else if (timeE2 < timeE1) {
        cout << "2" << endl;
    } else {
        cout << "3" << endl;
    }
}