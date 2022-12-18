#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int hasGreater(int d, vector<int> a);
int valid(int d, vector<int> a);

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, d, temp;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> d;
        vector<int> a;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            a.push_back(temp);
        }
        if (valid(d, a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

/**
 * @brief While there is a number greater than d in the vector we keep trying to
 * crunch it. Meaning check if the last number is less than d, if it is, we are
 * done. If it is not, we check if the sum of the first two numbers is less than
 * d, if it is, we replace the last number with the sum of the first two. This
 * is done in order to make the last number fit the constraint of being <= d. If
 * the sum of the first two numbers is greater than d, we return 0, meaning that
 * we cannot make the last number fit the constraint. Note referencing first and
 * last is relavent as we sort the vector in the beginning of the iteration.
 */
int valid(int d, vector<int> a) {
    while (hasGreater(d, a)) {
        sort(a.begin(), a.end());
        if (a[a.size() - 1] <= d) {
            cout << "YES" << endl;
        } else if (a[0] + a[1] <= d) {
            a[a.size() - 1] = a[0] + a[1];
        } else if (a[0] + a[1] > d) {
            return 0;
        }
    }
    return 1;
}

int hasGreater(int d, vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > d) return 1;
    }
    return 0;
}
