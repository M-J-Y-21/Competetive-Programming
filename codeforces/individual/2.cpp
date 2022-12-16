#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;


int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll input;
    ll currAns = 2;
    ll currAddition = 2;
    cin >> input;

    if (input == 1) {
        cout << currAns << endl;
        return 0;
    }

    for (ll i = 1; i < input; i++) {
        currAns += currAddition;
        if (i % 2 == 0 && i != 1) {
            currAddition++;
        }
    }
    cout << currAns << endl;

    return 0;
}