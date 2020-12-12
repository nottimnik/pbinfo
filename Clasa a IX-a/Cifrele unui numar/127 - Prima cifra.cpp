#include<iostream>
using namespace std;
int main() {
   int n, k, c, sum = 0;
   cin >> n;
   for(int i = 1; i<=n; ++i) {
      cin >> k;
      if (k!=0) {
         while(k) {
            c = k % 10;
            k /= 10;
         }
         sum += c;
      }
      else {
         sum += 0;
      }
   }
   cout << sum;
   return 0;
}
