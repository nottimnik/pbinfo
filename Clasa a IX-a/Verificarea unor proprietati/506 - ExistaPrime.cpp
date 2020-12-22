#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    bool adevar = false;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        int max = 0;
        for(int d = 1;d*d<=v[i];++d) {
            if(v[i]%d==0) {
                if (d>max) {
                    max = d;
                }
            }
        }
        if (max==1) {
            adevar = true;
        }
    }
    if(adevar==false) {
        cout << "NU";
    }
    else {
        cout << "DA";
    }
    return 0;
}
