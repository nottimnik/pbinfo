#include<iostream>
using namespace std;
int main() {
   int n, sum = 0, cnt = 0;
   int v[1001];
   int nr = 0;
   cin >> n;
   for(int i = 1;i<=n;++i) {
      cin >> v[i];
      sum += v[i];
      ++cnt;
   }
   int medie = sum / cnt;
   for(int i = 1;i<=n;++i) {
      if(v[i]>medie) {
         ++nr;
      }
   }
   cout << nr;
   return 0;
}
