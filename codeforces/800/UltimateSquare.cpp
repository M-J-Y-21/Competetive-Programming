#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, t;

    cin >> t;

    /**
     * The key observation to make here is that if n is odd then
     * you can make a cube fully with all the squares so you should ceil
     * otherwise do normal division which rounds down.
    */
    for (ll i = 0; i < t; i++) {
        cin >> n;
        n % 2 == 0 ? cout << n / 2 << endl : cout << (ll) ceil(n / 2.0) << endl;
    }

    return 0;
}