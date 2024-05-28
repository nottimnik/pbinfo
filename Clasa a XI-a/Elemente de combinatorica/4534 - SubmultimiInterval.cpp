#include <fstream>

using namespace std;

ifstream cin("submultimiinterval.in");
ofstream cout("submultimiinterval.out");

int n, res[20], frec[20], v[20];

void afisare(int k) {
    for(int i = 1;i<=k;i++) 
        cout << v[res[i]] << ' ';
    cout << '\n';
}

void back(int k, int start) {
    for(int i = start;i<=n;i++) {
        res[k] = i;
        
        afisare(k);
        back(k + 1, i + 1);
    }
}

int main() {
    int a, b; cin >> a >> b;
    n = b - a + 1;
    for(int i = 1;i<=n;i++) 
        v[i] = a + i - 1;
        
    back(1, 1); 
    return 0;
}
