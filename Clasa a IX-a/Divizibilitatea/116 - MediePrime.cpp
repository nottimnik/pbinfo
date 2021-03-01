#include<iostream>
#include<iomanip>

using namespace std;

bool prim(int a) {
  int cnt = 0;
  for(int d = 1;d*d<=a;++d) {
    if(a%d==0) {
      cnt += 2;
    }
    if(d*d==a) {
      --cnt;
    }
  }
  if(cnt==2) {
    return true;
  }
  return false;
}

int main()
{
    int n;
    cin >> n;
    int x , cntp=0 , sp=0;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> x;
        if(prim(x))
            sp+=x , cntp++;
    }
    cout << fixed << setprecision(2) << (double)(sp*100/cntp)*0.01;
    return 0;
}
