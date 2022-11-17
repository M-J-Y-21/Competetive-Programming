// diff 1000
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solution
    long long int n, m, a;
    cin >> n >> m >> a;

    long long int squaresL = ceil(m / (double) a);
    long long int squaresH = ceil(n / (double) a);
    
    cout << squaresL * squaresH << endl;
}