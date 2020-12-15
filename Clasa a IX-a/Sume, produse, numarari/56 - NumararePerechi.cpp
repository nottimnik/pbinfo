#include<iostream>
using namespace std;
int main() {
    int n, y, cnt = 0;
    cin >> y;
    if (y<0) {
        y = -y;
    }
    cin >> n;
    if (n<0) {
        n = -n;
    }
    while (n!=0) {
        if (n%10==y%10) {
            ++cnt;
        }
        y = n;
        cin >> n;
        if (n<0) {
            n = -n;
        }
    }
    cout << cnt;
}
