#include<iostream>
using namespace std;

int v[1001][1001], n, m;

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
        return true;
    }
    return false;
}

int main() {
    cin >> n >> m;
    for(int i = 0;i<n;++i) {
        for(int j = 0;j<m;++j) {
            cin >> v[i][j];
        }
    }
    for(int i = 0;i<n;++i) {
        if(prim(v[i][0])) {
            
        }
        else {
            for(int j = 0;j<m;++j) {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
