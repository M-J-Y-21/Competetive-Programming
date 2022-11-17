#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     * Went from 545ms to 311ms
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, price, quality;
    cin >> n;

    /**
     * @brief This works because price and quality are distinct.
     * So based on their sorting if one isn't equal to the other
     * eventually there will be a sort of inversion where a higher
     * price has a lower quality compared to another laptop.
     */
    for (int i = 0; i < n; i++) {
        cin >> price >> quality;
        if (price != quality) {
            cout << "Happy Alex" << endl;
            return 0;
        }  
    }
    cout << "Poor Alex" << endl;
    return 0;
}