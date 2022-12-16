#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int throws[] = {1, 2, 3, 4, 5, 6};
    int n;
    cin >> n;

    // just large enough size
    int count[1000005];
    fill(count, count + 1000005, 0);
    count[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int num : throws) {
            if (i - num >= 0) {
                count[i] += count[i - num];
                count[i] = count[i] % (int)(pow(10, 9) + 7);
            }
        }
    }

    cout << count[n] << endl;

    return 0;
}