// diff 1100
#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     * Went from 545ms to 311ms
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int shops, days;
    cin >> shops;

    int prices[shops];
    memset(prices, 0, sizeof(prices));
    for (int i = 0; i < shops; i++) {
        cin >> prices[i];
    }

    cin >> days;
    int coins[days];
    memset(coins, 0, sizeof(coins));
    for (int i = 0; i < days; i++) {
        cin >> coins[i];
    }

    sort(prices, prices + shops);

    /**
     * @brief The upper_bound() function returns an iterator that points to the
     * first value (returns that index) that is greater than the specified
     * value, or returns the iterator pointing to the (end + 1) index if no such
     * element is found. Need to get the actual value (i.e. index) by
     * subtracting that starting array address Otherwise would just get absolute
     * address which is useless.
     * upper_bound is basically binary search so that's log n * days
     * So total time complexity is log n * q where q = days.
     */
    for (int i = 0; i < days; i++) {
        cout << upper_bound(prices, prices + shops, coins[i]) - prices << endl;
    }

    // /**
    //  * @brief Outer loop is for days coins can spend
    //  * Inner loop is for shops prices there
    //  * With this time complexit is basically O(n^2)
    //  */
    // int numShops = 0;
    // for (int i = 0; i < days; i++) {
    //     for (int j = 0; j < shops; j++) {
    //         if (prices[j] <= coins[i]) {
    //             numShops++;
    //         }
    //     }
    //     cout << numShops << endl;
    //     numShops = 0;
    // }

    return 0;
}