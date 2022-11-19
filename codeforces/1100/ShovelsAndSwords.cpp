#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, emeralds, minAB;
    ll t;
    cin >> t;

    /**
     * In order to solve the probelm we must observe three constraints for num
     * of emeralds: 1) value of a, cannot have more emeralds than as 2) value of
     * b, cannot have more emeralds than bs 3) value of (a+b)/3 cannot have more
     * emeralds than this quotient. This is because assuming we have perfect
     * distribution of as and bs the quotient is the max emeralds we could
     * possibly get assuming from a & b we take 3 at a time since it takes 3
     * pieces for one emerald.
     */
    for (ll i = 0; i < t; i++) {
        cin >> a >> b;
        minAB = min(a, b);
        emeralds = min(minAB, ((a + b) / 3));
        cout << emeralds << endl;
    }
    return 0;
}