#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, q, temp, tempOE, sum, evens, odds;

    cin >> t;

    vector<ll> nums;

    for (ll i = 0; i < t; i++) {
        cin >> n >> q;
        nums.clear();
        evens = 0;
        odds = 0;

        // looping to read in array
        for (ll j = 0; j < n; j++) {
            cin >> temp;
            temp % 2 == 0 ? evens++ : odds++;
            nums.push_back(temp);
        }

        sum = accumulate(nums.begin(), nums.end(), (ll)0);

        // looping over to simulate query
        for (ll k = 0; k < q; k++) {
            cin >> tempOE >> temp;

            // Case 1: Adding even number to all even numbers
            if (tempOE == 0 && temp % 2 == 0) {
                sum += (temp * evens);
            }

            // Case 2: Adding odd number to all even numbers
            else if (tempOE == 0 && temp % 2 != 0) {
                sum += (temp * evens);
                odds += evens;
                evens = 0;
            }

            // Case 3: Adding odd number to all odd numbers
            else if (tempOE == 1 && temp % 2 != 0) {
                sum += (temp * odds);
                evens += odds;
                odds = 0;
            }

            // Case 4: Adding even number to all odd numbers
            else if (tempOE == 1 && temp % 2 == 0) {
                sum += (temp * odds);
            }

            cout << sum << endl;
        }
    }
    return 0;
}