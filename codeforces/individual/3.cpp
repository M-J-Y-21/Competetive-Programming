#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
ll bigPow(ll base, ll exp);

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll input;
    ll ans = 0;
    cin >> input;

    char temp;
    for (ll i = input-1; i >= 0; i--) {
        cin >> temp;
        if (temp == 'O') {
            ans += bigPow(2, i);
        }
    }
    cout << ans << endl;

    return 0;
}

ll bigPow(ll base, ll exp) {
    ll ans = 1;
    for (ll i = 0; i < exp; i++) {
        ans *= base;
    }
    return ans;
}