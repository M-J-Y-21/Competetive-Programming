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

    int t;
    cin >> t;

    double angles[t];
    memset(angles, 0, t);
    for (int i = 0; i < t; i++) {
        cin >> angles[i];
    }
    
    reverse(angles, angles + t);
    int n = 3;
    t--;
    
    /**
     * @brief To get sum of interior Ls of regular polygon
     * 180 * (n-2) where n is sides
     * div by n to get each L
     */
    while (t >= 0) {
        while ((180*(n-2))/n < angles[t]) {
            n++;
        }
        if ((180*(n-2))/n > angles[t]) {
            cout << "NO" << endl;
        } else if ((double) (180*(n-2))/n  == angles[t]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        n = 3;
        t--;
    }
    return 0;
}