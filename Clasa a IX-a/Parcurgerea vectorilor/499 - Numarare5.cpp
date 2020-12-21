#include<iostream>
using namespace std;
int main() {
    int n, v[1001], cnt = 0;
    cin >> n;
    for(int i = 1;i<=n;++i)  {
        cin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=n && j != i;++j) {
            int a = v[i];
            int b = v[j];
            int sum1 = 0;
            int sum2 = 0;
            while(a) {
                sum1 += a % 10;
                a /= 10;
            }
            while(b) {
                sum2 += b % 10;
                b /= 10;
            }
            if(sum1 == sum2) {
                ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}
