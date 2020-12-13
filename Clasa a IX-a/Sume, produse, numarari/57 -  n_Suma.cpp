#include<fstream>
using namespace std;

ifstream fin("n_suma.in");
ofstream fout("n_suma.out");

int main() {
   int n, k, sum;
   fin >> n;
   for(int i = 1; i<=n; ++i) {
      fin >> k;
      sum += k;
   }
   fout << sum;
   return 0;
}
