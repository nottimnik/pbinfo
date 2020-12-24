#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    bool adevar = true;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    int trec = -1000000;
    for(int i = 1;i<=n;++i) {
        if(v[i]%2==0) {
            if(v[i]<=trec) {
                adevar = false;
            }
            if(v[i]>trec) {
                trec = v[i];
            }
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
