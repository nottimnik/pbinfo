#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    bool adv = true;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        for(int j = i + 1;j<=n;++j) {
            if(v[i]>v[j]) {
                swap(v[i],v[j]);
            } 
        }
    }

    for(int i = 2;i<=n;++i) {
        if(v[i]!=v[i-1]+1) {
            adv = false;
        }
    }

    if(adv == true) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }
    return 0;
}
