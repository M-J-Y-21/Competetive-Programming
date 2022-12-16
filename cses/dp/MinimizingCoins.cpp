#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int target;

    // n is num of coins target is desired sum
    cin >> n >> target;

    long long int coins[n];
    long long int value[1000005];


    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    value[0] = 0;
    // i is the current target
    for (long long int i = 1; i <= target; i++) {
        value[i] = numeric_limits<long long int>::max();
        for (auto coin : coins) {
            if (i - coin >= 0) {
                value[i] = min(value[i], value[i - coin] + 1);
            }
        }
    }
    // value target is the number of min steps needed to get to that target sum
    value[target] < 0 ? cout << "-1" << endl : cout << value[target] << endl;

    return 0;
}