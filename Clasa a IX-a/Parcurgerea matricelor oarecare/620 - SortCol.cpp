#include <iostream>
using namespace std;
int n , a[101][101] , m;
int sort(int col)
{
    for(int i = 0 ; i < n ; ++i)
        for(int j= i+1; j < n; ++j)
        {
            if(a[i][col] > a[j][col])
            {
                int aux = a[i][col];
                a[i][col] = a[j][col];
                a[j][col] = aux;
            }
        }
}
int main()
{
   cin >> n >> m;
   for(int i = 0 ; i < n ; ++i)
    for(int j = 0 ; j < m ; ++j) cin >>a[i][j];
   for(int j = 0 ; j < m ; ++j)
   {
       sort(j);
   }
  for(int i = n - 1 ; i >= 0 ; --i)
   {
    for(int j = 0 ; j < m ; ++j)
        cout <<a[i][j]<<" ";
    cout<<endl;
   }
    return 0;
}
