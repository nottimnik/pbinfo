#include<iostream>
using namespace std;
int main() {
    int n, v[1001],parsum = 0, psum = 0, zecesum = 0, treisum = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = n;1<=i;--i) {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i = 1;i<=n;++i) {
        if(v[i]%2==0) {
            parsum += v[i];
        }
        if (i%2==0) {
            psum += v[i];
        }
        if (v[i]%10==0) {
            ++zecesum;
        }
        if (v[i]%3==0 && i % 2 == 1) {
            treisum += v[i];
        }
    }
    cout << parsum << endl;
    cout << psum << endl;
    cout << zecesum << endl;
    cout << treisum << endl;
    return 0;
}
