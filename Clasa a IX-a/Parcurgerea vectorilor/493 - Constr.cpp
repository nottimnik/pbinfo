#include<iostream>
using namespace std;
int main() {
    int v[1001], n, y[1001], sumcif;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        sumcif = 0;
        cin >> v[i];
        int k = v[i];
        while(k) {
            sumcif += k % 10;
            k /= 10;
        }
        k = v[i];
        y[i] = k % sumcif;
    }
    for(int i = 1;i<=n;++i) {
        cout << y[i] << " ";
    }
    return 0;
}
