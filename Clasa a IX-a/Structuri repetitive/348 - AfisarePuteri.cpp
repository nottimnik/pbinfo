#include<iostream>
using namespace std;
int main() {
    int n, p, q;
    cin >> n >> p;
    q = 1;
    cout << 1 << " ";
    while(q*n<=p) {
        q *= n;
        cout << q << " ";
    }
    return 0;
}
