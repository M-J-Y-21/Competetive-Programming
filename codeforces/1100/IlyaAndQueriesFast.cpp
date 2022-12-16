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

    int input[s.length()];
    memset(input, 0, s.length());

    for (int i = 1; i < s.length(); i++) {
        s[i] == s[i - 1] ? input[i] = 1 : input[i] = 0;
    }

    /**
     * @brief At this point
     * input is now changed into
     * a prefix sum array.
     */
    for (int i = 0; i < s.length(); i++) {
        i == 0 ? input[i] += 0 : input[i] += input[i - 1];
    }

    for (int i = 0; i < m; i++) {
        cin >> start >> stop;
        start--;
        stop--;
        cout << input[stop] - input[start] << endl;
    }

    return 0;
}