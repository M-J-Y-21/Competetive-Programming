#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solution
    string situation;
    cin >> situation;
    int consec = 0;
    char prev = '0';
    for (int i = 0; i < situation.length(); i++) {
        if (situation[i] == prev || i == 0) {
            consec++;
            if (consec == 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            consec = 1;
        }
        prev = situation[i];
    }
    cout << "NO" << endl;
    return 0;
}