#include<fstream>
using namespace std;

ifstream fin("minmax.in");
ofstream fout("minmax.out");

int main() {
    int n, v[1001], max = 0, min = 999999999;
    fin >> n;
    for(int i = 1;i<=n;++i) {
        fin >> v[i];
        if (v[i] > max) {
            max = v[i];
        }
        if (v[i] < min) {
            min = v[i];
        }
    }
    fout << min << " " << max;
    return 0;
}
