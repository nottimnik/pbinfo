#include<iostream>
using namespace std;
int main() {
   long long int n, S = 1, cs = 1;
   cin >> n;
   for(int i = 2; i <= n; ++i) {
      cs *= 1*i;
      S += cs;
   }
   cout << "Rezultatul este " << S;
   return 0;
}
