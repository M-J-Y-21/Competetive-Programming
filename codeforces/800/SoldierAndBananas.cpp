#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll k, n, w, dollarsNeeded, totalPrice = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++) {
        totalPrice += i * k;
    }

    dollarsNeeded = totalPrice - n;
    dollarsNeeded > 0 ? cout << dollarsNeeded << endl : cout << "0" << endl;

    return 0;
}