#include <fstream>

using namespace std;

ifstream cin("saturate.in");
ofstream cout("saturate.out");

int n, m, adiacenta[101][101], grad = 0, v[101], gasit = 0;

int main() {
    int a, b, threshold;
    cin >> n >> m;
    
    if(n % 2) threshold = n / 2 + 1;
    else threshold = n / 2;
    
    
    for(int i = 0;i<m;i++) {
        cin >> a >> b; 
        adiacenta[a][b] = adiacenta[b][a] = 1;
    }
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=n;j++) grad += adiacenta[i][j];
        if(grad >= threshold) { cout << i << ' '; gasit = 1; }
        grad = 0;
        
    }
    
    if(!gasit) cout << "Nu exista";
    
    
    
    return 0;
}
