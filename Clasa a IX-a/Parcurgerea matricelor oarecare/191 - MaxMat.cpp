#include <fstream>

using namespace std;

ifstream cin("maxmat.in");
ofstream cout("maxmat.out");

int v[1001][1001], n, m;

int main() {
    cin >> n >> m;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=m;j++)
            cin >> v[i][j];
        
    
    for(int i = 1;i<=n;i++) {
        int max = -9999, indice;
        for(int j = 1;j<=m;j++) {
            if(v[i][j] > max) {
                max = v[i][j];
                indice = j;
            }
        }
        cout << max << ' ' << indice << '\n';
    }

    return 0;
}
