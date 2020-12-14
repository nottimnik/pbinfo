#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1;i <=n; ++i) {
        int p = 0;
        for(int j = 1;j <= i; ++j) {
            p += j*j;
        }
        cout << p << " ";
    }
    return 0;
}
