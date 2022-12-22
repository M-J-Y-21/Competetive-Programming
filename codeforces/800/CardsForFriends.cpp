#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void checkCuts();

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        checkCuts();
    }

    return 0;
}

void checkCuts() {
    int w, h, n;
    cin >> w >> h >> n;
    int sheets = 1;

    while (h % 2 == 0) {
        h /= 2;
        sheets *= 2;
    }

    while (w % 2 == 0) {
        w /= 2;
        sheets *= 2;
    }

    if (sheets >= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return;
}