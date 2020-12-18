#include<iostream>
using namespace std;
int main() {
    int n, sum = 0, v[1001], cnt = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        if (v[i]!=0) {
            sum += v[i];
            ++cnt;
        }
    }
    int medie = sum / cnt;
    for(int i = 1;i<=n;++i) {
        if (v[i]==0) {
            cout << medie << " ";
        }
        else {
            cout << v[i] << " ";
        }
    }
    return 0;
}
