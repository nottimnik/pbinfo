#include <fstream>

using namespace std;

ifstream fin("gradmax.in");
ofstream fout("gradmax.out");

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
    
    int max = 0;
    
    for(int i = 1;i<=n;++i) {
        if(e[i] > max) max = e[i];
    }
    
    int count = 0;
    
    for(int i = 1;i<=n;++i) {
        if(e[i] == max) count++;
    }
    
    fout << count << ' ';
    
    
    
    for(int i = 1;i<=n;++i) {
        if(e[i] == max) fout << i << ' '; 
    }

    return 0;
}
