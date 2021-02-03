#include<iostream>
using namespace std;

int v[1001];

int prima_cifra (int n) {
    int prima;
    while(n) {
        prima = n % 10;
        n /= 10;
    }
    return prima;
}


int main() {
    int n; cin >> n;
    for(int i = 0;i<n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<n;++i) {
        int a = v[i-1], b = v[i];
        if(a%10==prima_cifra(b)) {
            cout << v[i-1] << " " << v[i] << endl;
        }
    }
    return 0;
}
