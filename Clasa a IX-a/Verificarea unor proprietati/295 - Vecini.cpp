#include<iostream>
using namespace std;
int main() {
    int n,v[1001];
    cin >> n;
    int cnt = 0;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 2;i<=n-1;++i){
        if (v[i-1]%2==v[i]%2 && v[i]%2==v[i+1]%2) {
            ++cnt;
        }
    }
    if(cnt==0) {
        cout << "NU";
    }
    else {
        cout << "DA";
    }
    return 0;
}
