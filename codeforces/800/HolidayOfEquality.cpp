#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve();

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

void solve() {
    int n, temp, maxSize = 0, equality = 0;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        nums.push_back(temp);
        maxSize = temp > maxSize ? temp : maxSize;
    }

    equality = n * maxSize;
    cout << (equality - accumulate(nums.begin(), nums.end(), 0)) << endl;
}