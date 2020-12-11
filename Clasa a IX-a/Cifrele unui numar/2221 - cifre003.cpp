#include<iostream>
using namespace std;
int main() {
    int n, sum = 0, cp;
    cin >> n;
    cp = n;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    n = cp;
    int cnt = 0;
    while(n) {
        if ((sum - n % 10)%3==0) {
            cnt += 1;
        }
        n /= 10;
    }
    cout << cnt;
    return 0;
}
