#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, temp;
    cin >> n;
    vector<int> evens;
    vector<int> odds;

    for (int j = 0; j < n; j++) {
        cin >> temp;

        if (temp % 2 == 0) {
            evens.push_back(temp);
        } else {
            odds.push_back(temp);
        }
    }

    // if parities differ
    if ((evens.size() + odds.size()) % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    // essentially if both evens and odds are even or else wouldn't get past
    // above if
    else if (evens.size() % 2 == 0) {
        cout << "YES" << endl;
        return;
    }

    // essentially if both evens and odds are odd or else wouldn't get past
    // above if
    else if (evens.size() % 2 != 0) {
        for (auto& even : evens) {
            for (auto& odd : odds) {
                if (abs(even - odd) == 1) {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        cout << "NO" << endl;
        return;
    }
}

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}