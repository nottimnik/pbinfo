#include<iostream>
using namespace std;
int main() {
   int n, max = 0, min = 99999999, imax, imin;
   int v[1001];
   cin >> n;
   for(int i = 1;i<=n;++i) {
      cin >> v[i];
      if(v[i]>max) {
         max = v[i];
         imax = i;
      }
      if(v[i]<min) {
         min = v[i];
         imin = i;
      }
   }
   cout << imin << " " << imax;
   return 0;
}
