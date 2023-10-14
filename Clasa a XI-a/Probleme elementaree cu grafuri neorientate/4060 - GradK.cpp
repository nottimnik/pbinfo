#include <fstream>

using namespace std;

ifstream fin("gradk.in");
ofstream fout("gradk.out");

int main() {
    int n, k; fin >> n >> k;
    int a, b;
    int v[101][101], e[101];
    
    while(fin >> a >> b) {
        v[a][b] = 1;
        v[b][a] = 1;
    }
    
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=n;++j) {
            if(v[i][j]) e[i]++;
        }
    }

    int suma = 0;

    for(int i = 1;i<=n;++i) {
        if(e[i] == k) {
            suma += 1;
        }
    }
    
    
    if(suma == 0) {
     	fout << "NU EXISTA";
        return 0;
    }
    
    fout << suma << ' ';
    
    
    
    for(int i = 1;i<=n;++i) {
        if(e[i] == k) {
            fout << i << ' ';
        }
    }

    return 0;
}
