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
   ll n;
   cin >> n;
   // increment to get the true number of slices needed
   n++;

   /**
    * If needed even slices we can use common line segments thus n/2
    * If needed odd than we have to make cuts equal to number of slices
   */
   if (n == 1) {
      cout << "0" << endl;
   }
   else if (n % 2 == 0) {
      cout << n / 2 << endl;
   }
   else {
      cout << n << endl;
   }
   return;
}