#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        for(int d = i+1;d<=n;++d) {
            if (v[i]==v[d]) {
                for(int j = d+1;j<=n;++j) {
                    v[j-1] = v[j];
                }
                --n;
                --i;
            }
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << v[i] << " ";
    }
    return 0;
}
