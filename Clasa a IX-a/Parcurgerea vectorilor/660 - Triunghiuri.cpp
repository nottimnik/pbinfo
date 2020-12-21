#include<iostream>
using namespace std;
int main() {
    int n, v[1001], cnt = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        for(int j = i+1;j<=n;++j) {
            for(int d = j+1;d<=n;++d) {
                int a = v[i];
                int b = v[j];
                int c = v[d];
                if ((a + b > c) && (b + c > a) && (a + c > b)) {
                    ++cnt;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
