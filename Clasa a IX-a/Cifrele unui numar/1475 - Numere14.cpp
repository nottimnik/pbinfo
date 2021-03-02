#include<fstream>

using namespace std;

ifstream cin("numere14.in");
ofstream cout("numere14.out");

int jumatate(int n) {
  int nr_cifre = 0;
  int cn = n;
  while(cn) {
    ++nr_cifre;
    cn /= 10;
  }
  nr_cifre = nr_cifre / 2 + 1;
  int nr;
  for(int i = 0;i<nr_cifre;++i) {
    nr = n % 10;
    n /= 10;
  }
  return nr;
}

int main() {
  int n;
  int sum = 0;
  cin >> n;
  for(int i = 0;i<n;++i) {
    int k;
    cin >> k;
    if(jumatate(k)%2==1) {
      sum += jumatate(k);
    }
  }
  cout << sum;
  return 0;
}
