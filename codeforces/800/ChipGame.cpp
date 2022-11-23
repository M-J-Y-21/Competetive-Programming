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
    ll n, m;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        if (n % 2 == m % 2)
            cout << "Tonya" << endl;
        else
            cout << "Burenka" << endl;
    }

    return 0;
}