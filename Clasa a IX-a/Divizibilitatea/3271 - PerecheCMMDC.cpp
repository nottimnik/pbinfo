#include <iostream>

using namespace std;

int cmmdc(int a, int b) {
  while(b){
    int r = a % b; 
    a = b;
    b = r;
  }
  return a;
}

int main() {
  int n;
  cin >> n;
  int max1, max2, max_div = 0;;
  for(int i = 0;i<n;++i) {
    int a, b;
    cin >> a >> b;
    if(cmmdc(a,b)>=max_div) {
      max_div = cmmdc(a,b);
      max1 = a;
      max2 = b;
    }
  }
  cout << max1 << " " << max2;
  return 0;
}
