#include<iostream>
using namespace std;

int v[101][101];

bool prim(int n) {
    int cnt = 0; 
    for(int d = 1;d*d<=n;++d) {
        if(n%d==0) {
            cnt += 2;
        }
        if(d*d==n) {
            --cnt;
        }
    }
    if(cnt == 2) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        int suma = 0;
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
            if(i%2==0 && prim(v[i][j]) == 1) {
                ++cnt;
            }
        }
    
    }
    
    cout << cnt;
    return 0;
}
