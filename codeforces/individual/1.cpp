#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int currLen = 0;

    string input;
    cin >> input;

    int len = input.length() + 1;
    char output[len];
    fill_n(output, len, '0');

    output[0] = 'A';
    output[1] = 'H';
    output[2] = 'O';
    output[3] = 'W';

    currLen += 4;

    for (int j = currLen; j < len; j++)    {
        output[j] = 'O';
    }

    // print out output
    for (int i = 0; i < len; i++) {
        cout << output[i];
    }
    cout << endl;

    return 0;
}