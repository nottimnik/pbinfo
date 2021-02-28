#include<fstream>

using namespace std;

ifstream cin("bomboane2.int");
ofstream cout("bomboane2.out");

int v[1001];

int main() {
  int n;
  cin >> n;
  for(int i = 1;i<=n;++i) {
    cin >> v[i];
  }

  int sum = 0;
  int ultimu_numar = 1;

  bool run = true;
  while(run) {
    int const_sum = 0;
    for(int i = 1;i<=n;++i) {
      if(v[i]>=ultimu_numar) {
        v[i]-=ultimu_numar;
        const_sum += ultimu_numar;
        ++ultimu_numar;
      }
      else {
        run = false;
        break;
      }
    }

    if(run) {
      sum += const_sum;
    }
  }

  cout << sum;
  return 0;
}
