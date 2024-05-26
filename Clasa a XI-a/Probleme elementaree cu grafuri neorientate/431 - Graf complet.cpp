#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("graf_complet.in");
ofstream cout("graf_complet.out");

int adiacenta[101][101], maxim = 0;

int esteComplet(int n) {
    int cnt = 0;
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j <=n;j++) {  
            int k; cin >> k;
            if(k==0) cnt++;
        }
    }
    return cnt <=n;
}

int main() {
    int g, n;
    cin >> g;
    
    for(int z = 1;z<=g;z++) {
        cin >> n;
        int a = esteComplet(n); 
        if(a) cout << "DA";
        else cout << "NU";
        cout << '\n';
        
    }
    return 0;
}
