#include <fstream>
#include <cmath>
using namespace std;

ifstream cin("graf_partial_2.in");
ofstream cout("graf_partial_2.out");

int adiacenta[101][101], maxim = 0;

int main() {
    int n, a, b;
    cin >> n;
    while(cin >> a >> b) {
        if(!adiacenta[a][b]) {
            adiacenta[a][0]++;
            adiacenta[b][0]++;
        }
        adiacenta[a][b] = adiacenta[b][a] = 1;
    }
    
    for(int i = 1;i<=n;i++) maxim = max(maxim,adiacenta[i][0]);
    
    int res = 0;
    
    for(int i = 1;i<=n;i++) {
        for(int j = i + 1;j<=n;j++) {
            if((adiacenta[i][0] == maxim || adiacenta[j][0] == maxim) && adiacenta[i][j] ) {
                res++;
                adiacenta[i][j] = adiacenta[j][i] = 0;
            }
        }
    }
    
    cout << res << endl;
    
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=n;j++) {
            cout << adiacenta[i][j] << ' ';
            
        }
        cout << endl;
    }
    return 0;
}
