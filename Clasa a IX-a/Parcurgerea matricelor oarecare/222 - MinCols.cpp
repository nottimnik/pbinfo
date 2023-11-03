#include <fstream>

using namespace std;

ifstream cin("mincols.in");
ofstream cout("mincols.out");

int v[1001][1001], n, m;

int main() {
    cin >> n;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            cin >> v[i][j];
    
    for(int i = 1;i<=n;i++) {
        int max = 9999;
        for(int j = 1;j<=n;j++) 
            if(v[j][i] < max) max = v[j][i];
        cout << max << ' ';
    }

    return 0;
}
