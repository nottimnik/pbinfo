#include<fstream>

using namespace std;

ifstream cin("suma6.in");
ofstream cout("suma6.out");

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

bool nr_special(int n) {
  int prima_cifra, ultima_cifra, nr_cifre = 0;
  while(n) {
    ++nr_cifre;
    if(nr_cifre==1) {
      ultima_cifra = n % 10;
    }
    prima_cifra = n % 10;
    n /= 10;
  }
  if(nr_cifre % 2 == 1 && ultima_cifra == prima_cifra) {
    return true;
  }
  return false;
}

int main() {
  int n;
  int sum = 0;
  cin >> n;
  for(int i = 0;i<n;++i) {
    int k;
    cin >> k;
    if(nr_special(k)) {
      sum += jumatate(k);
    }
  }
  cout << sum;
  return 0;
}
