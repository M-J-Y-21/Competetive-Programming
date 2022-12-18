#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double n;
    cin >> n;

    cout << int(ceil(n / 3) + floor((n - ceil(n / 3)) / 2)) << endl;

    return 0;
}

