#include<fstream>

using namespace std;

ifstream cin("permutari1.in");
ofstream cout("permutari1.out");

int n, v[10001], p[10001];

void afisare() {
    for(int i = 1;i<=n;++i) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

void back(int k) {
    for(int i = n;i>=1;--i) {
        
        if(!p[i]) {
            p[i] = 1;
            v[k] = i;
            if(k < n) {
                back(k + 1);
            }
            else {
                afisare();
            }
            p[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    back(1);
}
