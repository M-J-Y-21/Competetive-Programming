#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solution

    int t, n;
    ll m, sum, temp;
    cin >> t;
    vector<ll> nums;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        nums.clear();

        /**
         * Note we're always adding element aj/j but with how the problem is structured
         * the jth number in the array will included in the sum j times therefore that before
         * will just become aj and we can just check based on if the sum equals.
        */
        for (int i = 0; i < n; i++) {
            cin >> temp;
            nums.push_back(temp);
        }
        sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum == m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}