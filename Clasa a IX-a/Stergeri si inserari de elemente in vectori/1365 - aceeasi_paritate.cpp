#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    for(int i = 0;i < n;++i) {
        cin >> v[i];
    }
    for(int i = 0;i < n;++i) {
        cout << v[i] << " ";
        if ((v[i] + v[i+1])%2==0) {
            if(i==n-1) { }
            else {
                cout << (v[i]+v[i+1])/2 << " ";
            }

        }
    }
    return 0;
}
