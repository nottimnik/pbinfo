#include<iostream>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    long long int sum = 0;
    if (n != 1) {
        for(int d = 1;d * d <= n; ++d) {
            if(n % d ==0) {
                sum += d;
                sum += n / d; 
            }
            if (d*d==n) {
                sum -= d;
            }
        }
        cout << sum;
    }
    else {
        cout << 1;
    }
}
