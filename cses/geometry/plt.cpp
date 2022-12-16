#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tests;
    cin >> tests;

    double x1, x2, y1, y2, x3, y3;
    for (int i = 0; i < tests; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        // calculate gradient
        double m = (y2 - y1) / (x2 - x1);
        double c = y1 - m * x1;
        double expectedY = m * x3 + c;
        if (expectedY == y3) {
            cout << "TOUCH" << endl;
        } else if (expectedY > y3) {
            cout << "RIGHT" << endl;
        } else {
            cout << "LEFT" << endl;
        }
        /* code */
    }

    return 0;
}