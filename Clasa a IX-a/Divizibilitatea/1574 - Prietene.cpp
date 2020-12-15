#include<iostream>
using namespace std;
int main() {
    int a, b,sum1 = 0, sum2 = 0;
    cin >> a >> b;
    for(int d = 1;d*d<=a;++d) {
        if(a%d==0) {
            sum1 += d;
            sum1 += a / d;
        }
        if(d*d==a) {
            sum1 -= d;
        }
    }
    for(int d = 1;d*d<=b;++d) {
        if(b%d==0) {
            sum2 += d;
            sum2 += b / d;
        }
        if(d*d==b) {
            sum2 -= d;
        }
    }
    if (sum1 == sum2) {
        cout << "PRIETENE";
    }
    else {
        cout << "NU SUNT PRIETENE";
    }
}
