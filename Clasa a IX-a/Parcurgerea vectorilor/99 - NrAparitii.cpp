#include<fstream>
using namespace std;

ifstream fin("nraparitii.in");
ofstream fout("nraparitii.out");

int main() {
    int n, v[1001],cnt = 0;
    fin >> n;
    for(int i = 1;i<=n;++i) {
        fin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        if (v[i]==v[n]) {
            ++cnt;
        }
    }
    fout << cnt;
    return 0;
}
