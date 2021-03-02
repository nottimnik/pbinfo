#include<fstream>

using namespace std;

ifstream cin("xyz.in");
ofstream cout("xyz.out");

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << b;
  for(int i = 1;i<a;++i) {
    cout << c;
  }
  return 0;
}
