#include <fstream>

using namespace std;

ifstream cin("graf_partial.in");
ofstream cout("graf_partial.out");

int adiacenta[1001][1001], grade[1001];

int main() {
    int n, k, a, b;
    cin >> n;
    while(cin >> a >> b) {
        adiacenta[a][b] = adiacenta[b][a] = 1 ;
    }
    
    for(int i = 1;i<=n;i++) {
            for(int j = 1;j<=n;j++) 
                if(i % 2 == j % 2) adiacenta[i][j] = adiacenta[j][i] = 0;
        
    }
    int res = 0;
    for(int i = 1;i<=n;i++) {
        for(int j = i+1;j<=n;j++) 
            res += adiacenta[i][j];
    }
    cout << res;
    return 0;
}
