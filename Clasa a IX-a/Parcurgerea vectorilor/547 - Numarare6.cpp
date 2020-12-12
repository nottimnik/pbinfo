#include<iostream>
using namespace std;
int main() {
   int n, max = 0, min = 9999999;
   int v[1001];
   cin >> n;
   for(int i = 1;i<=n;++i) {
      cin >> v[i];
      if (v[i]>max) {
         max = v[i];
      }
      if (v[i] < min) {
         min = v[i];
      }
   }
   int dif = max - min;
   int cnt = 0;
   for(int i = 1;i<=n;++i) {
      if (dif==v[i]) {
         ++cnt;
      }
   }
   cout << cnt;
   return 0;
}
