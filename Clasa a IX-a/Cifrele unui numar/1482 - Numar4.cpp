#include<fstream>

using namespace std;

ifstream cin("numar4.in");
ofstream cout("numar4.out");

int main() {
  int n;
  cin >> n;
  int sum = 0;
  while(n) {
    int a = n % 10;
    if(a%2==0) {
      sum += 4;
    }
    else {
      sum += 5;
    }
    n /= 10;
  }
  cout << sum;
  return 0;
}
