#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    bool adevar = true;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }

    if(v[1]>v[n]) {
        swap(v[1],v[n]);
    }

    for(int i = 2;i<=n-1;++i) {
        if(v[n]<v[i]) {
            adevar = false;
        }
        if(v[i]<v[1]) {
            adevar = false;
        }
    }
    if(adevar==true) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }
    return 0;
}
