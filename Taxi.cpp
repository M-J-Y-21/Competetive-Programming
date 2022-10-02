// diff 1100
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solution
    int groups;
    int taxiCount = 0;
    int currCount = 0;
    cin >> groups;
    int hist[5] = {0, 0, 0, 0, 0};
    int num = 0;
    for (int i = 0; i < groups; i++) {
        cin >> num;
        hist[num]++;
    }

    while (hist[4] > 0 || hist[3] > 0 || hist[2] > 0 || hist[1] > 0) {
        if (currCount == 0 && hist[4] > 0) {
            hist[4]--;
            taxiCount++;
            currCount = 0;
        } else if (currCount <= 1 && hist[3] > 0) {
            hist[3]--;
            currCount += 3;
        } else if (currCount <= 2 && hist[2] > 0) {
            hist[2]--;
            currCount += 2;
        } else if (currCount <= 3 && hist[1] > 0) {
            hist[1]--;
            currCount += 1;
        } else {
            taxiCount++;
            currCount = 0;
        }
    }
    if (currCount > 0) {
        taxiCount++;
    }
    cout << taxiCount << endl;
}