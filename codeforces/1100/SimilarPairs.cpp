#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, temp;
    cin >> t;
    vector<int> evens;
    vector<int> odds;

    for (int i = 0; i < t; i++) {
        cin >> n;
        evens.clear();
        odds.clear();

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
            cout << "NO differ with test " << i + 1 << endl;
            continue;
        }

        // essentially if both evens and odds are even or else wouldn't get past
        // above if
        else if (evens.size() % 2 == 0) {
            cout << "YES Evens with test " << i + 1 << endl;
            continue;
        }

        // essentially if both evens and odds are odd or else wouldn't get past
        // above if
        else if (evens.size() % 2 != 0) {
            for (auto& even : evens) {
                for (auto& odd : odds) {
                    if (abs(even - odd) == 1) {
                        cout << "YES autos with test " << i + 1 << endl;
                        continue;
                    }
                }
            }
            cout << "NO autos with test " << i + 1 << endl;
        }
    }
    return 0;
}
