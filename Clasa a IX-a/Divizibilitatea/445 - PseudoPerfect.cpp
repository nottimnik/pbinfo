#include<iostream>
using namespace std;
int main() {
   long long int n;
   cin >> n;
   long long int sum = 0;
   for(int d = 1;d*d<=n;++d) {
      if (n % d == 0) {
         sum += d;
         sum += n / d;
      }
      if (d*d==n) {
         sum -= d;
      }
   }
   if (sum%n==0) {
      cout << "DA";
   }
   else {
      cout << "NU";
   }
   return 0;
}
