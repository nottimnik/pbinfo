#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int n,cnt = 0,sum = 0;
    cin >> n;
    for(int d = 1;d*d<=n;++d) {
        if (n % d == 0) {
            sum += d;
            sum += n / d;
            cnt += 2;
        }
        if (d * d == n) {
            sum -= d;
            --cnt;
        }
    }
    cout << fixed << setprecision(2) << (float)sum / cnt;
    return 0;
}
