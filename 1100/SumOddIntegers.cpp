#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // need long long int in order to fit in bounds
    long long int t, n, k, currSum = 0, attempt = 0;
    cin >> t;

    for (long long int i = 0; i < t; i++) {
        cin >> n >> k;

        /**
         * @brief We notice that the sum of the first k distinct odd numbers if
         * k^2 Example for k = 3 : 1 + 3 + 5 = 9 = k^2 = 3^2 = 9 As such we know
         * the minimum our n can be is bounded by k^2 as those are the first k
         * smallest distinct odds and that is our check here.
         */
        if (k * k > n) {
            cout << "NO" << endl;
        }

        /**
         * @brief We also notice that sum of distinct even number of odds is
         * evens likewise sum of distinct odd number of odds is odds. This tells
         * us that if our end goal (n) is even we need to add k odd distinct odd
         * numbers where k is even and vice versa for when n is odd i.e. we need
         * the same parity between n and k in order to generate n with k.
         */
        else if (n % 2 != k % 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
