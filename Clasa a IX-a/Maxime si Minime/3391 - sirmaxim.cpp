#include <fstream>
using namespace std;

ifstream cin("sirmaxim.in");
ofstream cout("sirmaxim.out");

int n, a[21];

int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    int maxi = 0;
    for(int i = 1; i <= n/2; ++i)
        maxi = max(maxi, a[i]);
    int cnt = 0;
    for(int i = n/2+1; i <= n; ++i)
        if(maxi == a[i])
            cnt++;
    cout << cnt;
    return 0;
}
