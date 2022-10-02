// diff 1000
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solution
    int n;
    char first;
    char last;
    cin >> n;
    string word[n];
    string number;
    for (int i = 0; i < n; i++) {
        cin >> word[i];
        if (word[i].length() > 10) {
            first = word[i][0];
            last = word[i][word[i].length() - 1];
            number = to_string(word[i].length() - 2);
            // can append like this with chars and strings
            word[i] = first + number + last;
        }
    }

    for (int j = 0; j < n; j++) {
        cout << word[j] << endl;
    }

    return 0;
}