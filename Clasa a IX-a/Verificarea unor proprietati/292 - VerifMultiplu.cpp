#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    bool adevar = true;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<=n-1;++i) {
        if(v[i]%v[n]!=0) {
            adevar = false;
        }
    }
    if(adevar == true) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }
    return 0;
}
