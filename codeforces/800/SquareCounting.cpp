#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll n, s;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> s;
        cout << s / (n * n) << endl;
    }

    return 0;
}