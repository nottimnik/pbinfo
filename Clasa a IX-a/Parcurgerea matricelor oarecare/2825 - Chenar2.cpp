#include <iostream>
using namespace std;

int n , m , x , v[101][101];

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            cin >> v[i][j];
    cin >> x;

    bool adv = false;

    for(int i = 1;i <= n; ++i) {
      if(v[i][m] == x || v[i][1] == x) {
        adv = true;
      }
    }

    for(int i = 1;i <= m; ++i) {
      if(v[1][i] == x || v[n][i] == x) {
        adv = true;
      }
    }

    if(adv) {
      cout << "DA";
    }    
    else {
      cout << "NU";
    }

    return 0;
}
