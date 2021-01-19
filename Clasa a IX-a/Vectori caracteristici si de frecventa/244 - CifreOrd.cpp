#include <fstream>
#include <cmath>
using namespace std;

ifstream cin("cifreord.in");
ofstream cout("cifreord.out");

int f[11];

int main()
{
    int n;
    cin >> n;
    int x;
    for(int i = 1; i <= n; ++i)
        cin >> x, f[x]++;
    int cnt = 1;
    for(int i = 0; i <= 9; ++i){
        for(int j = 1; j <= f[i]; ++j){
            cout << i << ' ';
            if(cnt % 20 == 0)
                cout << endl;
            cnt++;
        }
    }
    return 0;
}
