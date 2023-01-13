#include <fstream>

using namespace std;

ifstream cin("adiacenta.in");
ofstream cout("adiacenta.out");

int n, m, v[101][101];


int main()
{
    cin >> n >> m; 
    
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=n;++j) {
            v[i][j] = 0;
        }
    }
    
    for(int i = 1;i<=m;++i) {
        int a, b;
        cin >> a >> b;
        v[a][b] = 1;
        v[b][a] = 1;
    }
    
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=n;++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
