#include<iostream>
using namespace std;
int main() {
    int n, m, p = 1;
    cin >> n >> m;
    int i;
    for(i = 0;p != m;++i) {
        p *= n;
    }
    cout << i;
    return 0;
}
