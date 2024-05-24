#include <fstream>
#include <cmath>

using namespace std;

ifstream cin("subgraf1.in");
ofstream cout("subgraf1.out");

int adiacenta[101][101], grade[101], grad = 0, minim = 2 ^ 32 - 1;

int main() {
    int n, a, b; cin >> n;
    
    while(cin >> a >> b) {
        adiacenta[a][b] = adiacenta[b][a] = 1;
    }
    
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=n;j++) grad += adiacenta[i][j];
        grade[i] = grad;
        
        minim = min(minim, grad);
        grad = 0;
        
    }
    
    
    int muchii = 0;
    
    for(int i = 1;i<=n;i++) {
        if(grade[i] > minim) {
            for(int j = i + 1;j<=n;j++) {
                if(grade[j] > minim && adiacenta[i][j]) {
                    muchii++;
                } 
                
            }
        }
    }
    
    cout << muchii;
    return 0;
}
