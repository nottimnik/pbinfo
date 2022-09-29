#include<fstream>
using namespace std;

ifstream cin("permpf.in");
ofstream cout("permpf.out");

int n, v[10001], s = 0, len = 1;
char a[10001];

void afisare() {
    for(int i = 1;i<=n;++i) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

int verif(int k) {
    for(int i = 1;i<k;++i) {
        if(v[i] == v[k]) {
            return 0;
        }
    }
    
    if(v[k] == k) {
        return 0;
    }
    return 1;
}

void bt() {
    int k = 1;
    v[k] = 0;
    while(k) {
        while(v[k] < n) {
            v[k]++;
            if(verif(k)) {
                if(k == n) {
                    afisare();
                }
                else {
                    v[++k] = 0;
                }
            }
        }
        --k;
    }
}

int main() {
    
    cin >> n;

    
    
    bt();


    
    return 0;
}


