#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve();

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

void solve() { 
    int n, k;
    // n problems, k minutes to party
    cin >> n >> k;
    int currentTime = 240 - k;
    int problem = 0;
    while ((currentTime-5*(problem)) >= 0 && problem < n) {
        problem++;
        currentTime -= 5 * problem;
    }
    problem = currentTime < 0 ? problem - 1 : problem;
    cout << problem << endl;
}