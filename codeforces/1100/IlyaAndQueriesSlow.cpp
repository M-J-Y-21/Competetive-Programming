#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * @brief Super speed boost
     * Went from 545ms to 311ms
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int m, start, stop, answer = 0;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> start >> stop;
        start--;
        stop--;
        while (start < stop) {
            if (s[start] == s[start+1]) {
                answer++;
            }
            start++;
        }
        cout << answer << endl;
        answer = 0;
    }

    return 0;
}