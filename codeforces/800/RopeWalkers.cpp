#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<ll> positions = {a, b, c};

    // We sort so we know middle index is indeed middle numerically
    sort(positions.begin(), positions.end());

    /**
     * The formula is basically adding the difference between the difference in
     * distance of the middle point to both the left and right point wrt to d.
     */
    cout << max((ll)0, d - abs(positions[0] - positions[1])) +
                max((ll)0, d - abs(positions[1] - positions[2]))
         << endl;

    return 0;
}