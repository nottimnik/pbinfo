#include<iostream>
using namespace std;
int main() {
    int n,v[1001];
    cin >> n;

    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }

    for(int i = 1;i<=n-1;++i) {
        for(int j = i + 1;j<=n-1;++j) {
            if(v[i]<v[j]) {
                swap(v[i],v[j]);
            }
        }
    }

    for(int i = 1;i<n;++i) {
        int a = v[i];
        int b = v[n];
        while(b) {
            int r = a % b;
            a = b;
            b = r;
        }
        if(a==1) {
            cout << v[i] << " ";
        }
    }

    return 0;
}
