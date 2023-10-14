#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("grade.in");
ofstream fout("grade.out");

int main() {
    int n; fin >> n;
    int a, b, v[1001][1001];
    
    while(fin >> a >> b) {
        
        if(v[a][b] != 1) {
            v[a][0]++;
            v[a][b] = 1;
        }
        
        if(v[b][a] != 1) {
            v[b][a] = 1;
            v[b][0]++;
        }
    }
    
    for(int i = 1;i<=n;++i) {
        fout << v[i][0] << ' ';
    }

    return 0;
}
