#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve();

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

void solve() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            count++;
        }
    }

    cout << count << endl;
}