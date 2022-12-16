#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define N pow(10, 12)

unordered_set<ll> cubes;

void prefilA() {
    for (ll i = 1; i * i * i <= N; i++) {
        cubes.insert(i * i * i);
    }
}

bool check(ll x) {
    for (ll i = 1; i * i * i <= N; i++) {
        if (cubes.count(x - i * i * i)) {
            return true;
        }
    }
    return false;
}

/**
 * You need to realize a few things.
 * 1) We can think of our inputs on a spectrum of a^3 <= a^3 + b^3 <= x
 * 2) As a result we can iterate from 1 to sqrt_3(x) since we know a and b start
 * at 1 3) We can manipulate 1 to get b^3 = x - a^3 thus if we simulate 2 to get
 * all As we just need to check if there is a matching b if there is we know the
 * sum of cubes is possible with this one.
 */
int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll x;

    prefilA();

    for (int i = 0; i < t; i++) {
        cin >> x;
        if (check(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}