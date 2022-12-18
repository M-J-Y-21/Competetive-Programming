#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll validToEat(ll n, vector<ll> a);

/**
 * @brief The logic is basically that if the last two (largest) elements are
 * equal, then we can always balance the eating of the candies by adjusting
 * them. If the last two elements are not equal, then we can also balance it if
 * the last element is one greater than the second last element. This is because
 * we can always make the last element equal to the second last element, and
 * then make the second last element equal to the last element - 1 and so on and
 * so forth until we eat all candies.
 *
 */
int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n;
    cin >> t;

    for (ll i = 0; i < t; i++) {
        cin >> n;
        vector<ll> a;
        for (ll j = 0; j < n; j++) {
            ll temp;
            cin >> temp;
            a.push_back(temp);
        }
        if (validToEat(n, a)) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}

ll validToEat(ll n, vector<ll> a) {
    sort(a.begin(), a.end());
    if (n == 1 && a[0] == 1) {
        return 1;
    }

    else if (a[a.size() - 1] == a[a.size() - 2] ||
             (a[a.size() - 1] - 1) == a[a.size() - 2]) {
        return 1;
    }
    return 0;
}