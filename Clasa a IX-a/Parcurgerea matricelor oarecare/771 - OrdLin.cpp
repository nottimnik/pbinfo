#include <iostream>
using namespace std;

int n,m,k,a[101][101], v[101] , s[101];

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i) {
        for(int j = 1 ; j <= m ; ++j) {
            cin >> a[i][j] , s[i] += a[i][j];
        }
    }
            
    for(int i = 1 ; i <= n ; ++i) {
        v[i] = i;
    }
    
    for(int i =1 ; i < n ; ++i) {
        for(int j = i + 1 ; j <= n ; ++j) {
            if(s[v[i]] > s[v[j]]) swap(v[i] , v[j]);
        }
    }
    
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= m ; ++j) {
            cout << a[v[i]][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
