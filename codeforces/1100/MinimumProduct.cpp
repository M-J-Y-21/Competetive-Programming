#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll minProd(ll a, ll b, ll x, ll y, ll n);
int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    ll a, b, x, y, n;

    for (ll i = 0; i < t; i++) {
        cin >> a >> b >> x >> y >> n;
        // we output the min of first trying to dec a as much as possible than b and vice versa.
        cout << min(minProd(a, b, x, y, n), minProd(b, a, y, x, n)) << endl;
    }

    return 0;
}

ll minProd(ll a, ll b, ll x, ll y, ll n) { 
    
    /**
     * Here we calculate the max diff that we can subtract from a while taking into account
     * constraints of x and n.
    */
    ll diff1 = a - x;
    ll canA = min(diff1, n);

    /**
     * We actually decrement by the value we found and we do same later for b.
    */
    a -= canA;
    n -= canA;

    ll diff2 = b - y;
    ll canB = min(diff2, n);

    b -= canB;
    n -= canB;

    return a * b;
}