#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, q, temp, tempOE;
    cin >> t;
    vector<long long int> evens;
    vector<long long int> odds;

    for (long long int i = 0; i < t; i++) {
        cin >> n >> q;
        evens.clear();
        odds.clear();

        for (long long int j = 0; j < n; j++) {
            cin >> temp;
            (temp % 2 == 0) ? evens.push_back(temp) : odds.push_back(temp);
        }
        for (long long int k = 0; k < q; k++) {
            cin >> tempOE >> temp;
            if (!odds.empty() && tempOE == 1) {
                for (long long int &odd : odds) {
                    odd += temp;
                }

            } else if (!evens.empty()) {
                for (long long int &even : evens) {
                    if (i == 3) {
                        cout << "even on t == 3 " << even << " query number "
                             << k << endl;
                    }
                    even += temp;
                }
            }
            // cout << "Total even numbers "
            //      << accumulate(evens.begin(), evens.end(), (long long int) 0)
            //      << " after query "
            //      << k << endl;
            // cout << "Total odd numbers "
            //      << accumulate(odds.begin(), odds.end(), (long long int) 0)
            //      << " after query " << k << endl;

            // if (k == 6) {
            //     for (long long int &even : evens) {
            //         cout << "Last evens " << even << endl;
            //     }
            // }
            cout << (accumulate(evens.begin(), evens.end(), (long long int)0) +
                     accumulate(odds.begin(), odds.end(), (long long int)0))
                 << endl;
        }
    }

    return 0;
}