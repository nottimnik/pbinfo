#include<iostream>
using namespace std;
int main() {
    int n,x[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> x[i];
    }
    int m,y[1001];
    cin >> m;
    for(int i = 1;i<=m;++i) {
        cin >> y[i];
    }
    for(int i = 1;i<=m;++i) {
        int cnt = 0;
        for(int j = 1;j<=n;++j) {
            if(y[i]==x[j]) {
                ++cnt;
            }
        }
        if (cnt == 0) {
            cout << 0 << " ";
        }
        else {
            cout << 1 << " ";
        }
    }
    return 0;
}
