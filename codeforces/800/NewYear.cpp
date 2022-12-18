#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int calculateMinutes(int hours, int minutes);

int main() {
    /**
     * @brief Super speed boost
     */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, hours, minutes;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> hours >> minutes;
        cout << calculateMinutes(hours, minutes) << endl;
    }

    return 0;
}

int calculateMinutes(int hours, int minutes) {
    int newTotalMinutes = hours * 60 + minutes;
    return (24 * 60) - newTotalMinutes;
}