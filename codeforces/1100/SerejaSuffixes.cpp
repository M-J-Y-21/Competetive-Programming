#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     * Went from 545ms to 311ms
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, l;
    cin >> n >> m;
    int elements[n];
    memset(elements, 0, n);

    for (int i = 0; i < n; i++) {
        cin >> elements[i];
    }

    /**
     * @brief The method is to use a set
     * We Insert into that set the current element
     * this will only store distinct elements
     * allowing us to get the number of distinct elements for
     * each index. This is done by getting the current size
     * of the set.
     */
    set<int> input;
    for (int i = n - 1; i >= 0; i--) {
        input.insert(elements[i]);
        elements[i] = input.size();
    }

    while (m > 0) {
        cin >> l;
        l--;
        cout << elements[l] << endl;
        m--;
    }
    
    return 0;
}