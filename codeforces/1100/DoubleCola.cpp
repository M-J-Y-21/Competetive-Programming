#include <bits/stdc++.h>

#include <queue>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i = 0, ans = 0;
    cin >> n;
    while (n > 5 * pow(2, i)) {
        n -= 5 * pow(2, i);
        i++;
    }

    ans = (n - 1) / pow(2, i);

    switch (ans) {
        case 0:
            cout << "Sheldon" << endl;
            break;
        case 1:
            cout << "Leonard" << endl;
            break;
        case 2:
            cout << "Penny" << endl;
            break;
        case 3:
            cout << "Rajesh" << endl;
            break;
        case 4:
            cout << "Howard" << endl;
            break;

            return 0;
    }
}