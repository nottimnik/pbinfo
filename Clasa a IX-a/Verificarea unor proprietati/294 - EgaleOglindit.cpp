#include<iostream>
using namespace std;
int main() {
    int n,v[1001];
    cin >> n;
    bool adevar = false;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    int a = v[1];
    int ogl = 0;
    while(a) {
        ogl = ogl * 10 + a % 10;
        a /= 10;
    }
    for(int i = 2;i<=n;++i) {
        if(v[i]==ogl) {
            adevar = true;
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
