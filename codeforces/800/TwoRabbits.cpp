#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, x, y, a, b, time;

    cin >> t;
    for (ll i = 0; i < t; i++) {
        cin >> x >> y >> a >> b;

        /**
         * If you solve when the two time equations are 
         * equal you get T = (y-x)/(a+b) 
         * Since we only want to check for positive integers
         * we also check that y-x is divisible by a+b and
         * we're not getting an incorrect answer because of 
         * truncation.
        */
        time = (y - x) / (a + b);
        if (time * (a + b) != (y - x))
            cout << "-1" << endl;
        else
            cout << time << endl;
    }
    return 0;
}