#include<iostream>
using namespace std;
int main() {
    int n, v[1001], sum = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        sum += v[i];
    }
    for(int i = 1;i<=n;++i) {
        cout << sum - v[i] << " ";
    }
    return 0;
}
