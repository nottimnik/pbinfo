#include<iostream>
using namespace std;
int main() {
   int k, n, par = 0, impar = 0;
   cin >> n;
   for(int i = 1;i<=n;++i) {
      cin >> k;
      if (k%2==0) {
         par += 1;
      }
      else {
         impar += 1;
      }
   }
   if (impar < par) {
      swap(impar,par);
      cout << impar - par;
   }
   else {
      cout << impar - par;
   }
   return 0;
}
