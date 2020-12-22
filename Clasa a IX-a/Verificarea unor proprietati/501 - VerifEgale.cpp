#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    bool adevar = true;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        if(i==1) {
        }
        else {
            if (v[1]!=v[i])
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
