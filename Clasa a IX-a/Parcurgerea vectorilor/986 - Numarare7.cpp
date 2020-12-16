#include<iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    float v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    if (v[1]>v[n]) {
        swap(v[1],v[n]);
    }
    for(int i = 1;i<=n;++i) {
        if (v[1]<=v[i] && v[i]<=v[n]) {
            continue;
        }
        else {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
