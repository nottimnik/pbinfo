#include<iostream>
using namespace std;
int main() {
   int n, k, min = 0, max = 9999999;
   cin >> n;
   for(int i = 1;i<=n;++i) {
      cin >> k;
      if (k>min) {
         min = k;
      }
      if (max>k) {
         max = k;
      }
   }
   cout << max << " " << min;
   return 0;
}
