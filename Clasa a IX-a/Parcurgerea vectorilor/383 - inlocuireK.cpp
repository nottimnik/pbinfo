#include <iostream>
using namespace std;
int multiplu(int n, int k)
{
    int r = n % k;
    if(r <= k / 2) return n - r;
    else return n + k - r;
}

int main()
{
    int k , n , a[201] , v[201];
    cin >> k >> n;
    for(int i = 0 ; i < n; ++i)
    {
        cin >> a[i];
        v[i] = multiplu(a[i],k);
    }
    for(int i = n-1 ; i >= 0 ; --i)
    {
        cout << v[i] << ' ';
    }
}
