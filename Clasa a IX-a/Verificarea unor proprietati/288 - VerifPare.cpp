#include<iostream>
using namespace std;
int main() {
    int n, k, sum = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> k;
        if(k%2==0) {
            ++sum;
        }
    }
    if(sum==n) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }
    return 0;
}
