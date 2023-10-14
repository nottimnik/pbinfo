#include <fstream>

using namespace std;

ifstream fin("izolate.in");
ofstream fout("izolate.out");

int main() {
    int n; fin >> n;
    int a, b, v[1001][1001], e[1001];
    while(fin >> a >> b) {
        v[a][b] = v[b][a] = 1;
    }
    
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=n;++j) {
            if(v[i][j]) e[i]++;
        }
    }
    
    int s = 0;
    
    for(int i = 1;i<=n;++i) {
        if(!e[i]) s++;
    }
    
    fout << s << ' ';
    
    for(int i = 1;i<=n;++i) {
        if(!e[i]) fout << i << ' ';
    }

    return 0;
}
