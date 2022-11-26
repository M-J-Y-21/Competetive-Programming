#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, instancesMax = 0;
    ll a, b, c, max;
    vector<ll> nums;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        nums.clear();
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);
        max = *max_element(nums.begin(), nums.end());
        if (a == b && b == c) {
            cout << "1 1 1" << endl;
            continue;
        }
        instancesMax = 0;
        for (int l = 0; l < 3; l++) {
            nums[l] == max ? instancesMax++ : instancesMax += 0;
        }

        for (int j = 0; j < 3; j++) {
            if (nums[j] != max) {
                cout << (max - nums[j] + 1) << " ";
            } else if (nums[j] == max && instancesMax == 1) {
                cout << "0 ";
            } else {
                cout << "1 ";
            }
        }
        cout << endl;
    }

    return 0;
}