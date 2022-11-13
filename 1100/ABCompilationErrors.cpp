#include <bits/stdc++.h>

using namespace std;

/**
 * @brief Basic method to solve problem is sort all arrays
 * and then compare where the first unit of different is with
 * the previous array when found that element print it.
 */
int main() {
    /**
     * @brief Super speed boost
     * Went from 545ms to 311ms
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int firstErrors[n];
    memset(firstErrors, 0, n);
    
    for (int i = 0; i < n; i++) {
        cin >> firstErrors[i];
    }

    int secondErrors[n - 1];
    memset(secondErrors, 0, n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> secondErrors[i];
    }

    int thrirdErrors[n - 2];
    memset(thrirdErrors, 0, n - 2);
    for (int i = 0; i < n - 2; i++) {
        cin >> thrirdErrors[i];
    }

    sort(firstErrors, firstErrors + n);
    sort(secondErrors, secondErrors + n - 1);
    sort(thrirdErrors, thrirdErrors + n - 2);

    int in = 0;
    for (int i = 0; i < n - 1; i++) {
        if (firstErrors[i] != secondErrors[i]) {
            cout << firstErrors[i] << endl;
            in = 1;
            break;
        }
    }
    if (!in) {
        cout << firstErrors[n - 1] << endl;
    }

    in = 0;
    for (int i = 0; i < n; i++) {
        if (secondErrors[i] != thrirdErrors[i]) {
            cout << secondErrors[i] << endl;
            in = 1;
            break;
        }
    }
    if (!in) {
        cout << secondErrors[n - 2] << endl;
    }

    return 0;
}