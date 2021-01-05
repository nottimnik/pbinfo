#include<iostream>
using namespace std;
int mic(int u) {
    int celmaimic = 10;
    while(u) {
        if(u%10<celmaimic) {
            celmaimic = u % 10;
        }
        u /= 10;
    }
    return celmaimic;
}

int main() {
    int n, v[1001], k;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> k;
        v[i] = mic(k);
    }
    for(int i = 1;i<=n;++i) {
        for(int j = i+ 1;j<=n;++j) {
            if(v[i]>v[j]) {
                swap(v[i],v[j]);
            }
        }
    }
    if(v[1]==0) {
        int i = 2;
        while(v[1]==0) {
            if(v[i]!=0) {
                swap(v[1],v[i]);
                break;
            }
            else {
                ++i;
            }
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << v[i];
    }
}
