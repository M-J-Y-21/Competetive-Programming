// diff 1100
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int normal[10000000];
int prefixSums[10000000];
int subSeq[10000000];

int main() {
    int n, shift, minIdx;
    cin >> n >> shift;
    int min = INT16_MAX;

    if (shift == 1) {
        for (int i = 0; i < n; i++) {
            cin >> normal[i];
            if (normal[i] < min) {
                min = normal[i];
                minIdx = i;
            }
        }
        cout << minIdx + 1 << endl;
        return 0;
    }

    // calculate prefix sums array
    for (int i = 1; i <= n; i++) {
        cin >> prefixSums[i];
        prefixSums[i] += prefixSums[i - 1];
    }

    minIdx = 0;
    for (int m = 1; m <= n - shift; m++) {
        if (prefixSums[minIdx + shift] - prefixSums[minIdx] >
            prefixSums[m + shift] - prefixSums[m]) {
            minIdx = m;
        }
    }
    cout << minIdx + 1 << endl;
    return 0;
}