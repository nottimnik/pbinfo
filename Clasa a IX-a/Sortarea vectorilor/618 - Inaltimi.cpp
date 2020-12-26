#include<iostream>
using namespace std;
int main() {
    int n, v[10001], p[10001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        p[i] = i;
    }
    for(int i = 1;i<=n;++i) {
        for(int j = i + 1;j<=n;++j) {
            if(v[i]>v[j]) {
                swap(v[i],v[j]);
                swap(p[i],p[j]);
            }
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << p[i] << " ";
    }
    return 0;
}
