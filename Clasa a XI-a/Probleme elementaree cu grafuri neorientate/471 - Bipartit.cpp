#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("bipartit.in");
ofstream cout("bipartit.out");

int n,m,x,y,f[101][101], u[101], a;

int main() {
    
    cin >> n >> m;
    for(int i = 1;i<=m;i++) {
        cin >> x >> y;
        f[x][y] = f[y][x] = 1;
    }
    
    cin >> a;
    
    for(int i = 1;i<=a;i++) {
        cin >> x;
        u[x] = 1;
    }
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=n;j++) {
            if(f[i][j] == 1 && u[i] == u[j]) {
                cout << "NU";
                return 0;
            }
        }
    }
    cout << "DA";
    
    return 0;
}
