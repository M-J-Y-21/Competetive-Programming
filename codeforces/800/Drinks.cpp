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
    int n, temp;
    vector<double> percentages;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        percentages.push_back(temp);
    }
    cout << accumulate(percentages.begin(), percentages.end(), 0.0) /
                percentages.size()
         << endl;
}