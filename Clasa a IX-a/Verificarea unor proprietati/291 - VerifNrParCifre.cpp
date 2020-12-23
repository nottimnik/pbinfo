#include<iostream>
using namespace std;
int main() {
    int n, v[1001],cnt = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        int sum = 0;
        while(v[i]) {
            v[i] /= 10;
            ++sum;
        }
        if(sum%2==0) {
            ++cnt;
        }
    }
    if(cnt==n) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }
    return 0;
}
