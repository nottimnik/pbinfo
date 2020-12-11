#include<iostream>
using namespace std;
int main() {
    int c1, c2;
    cin >> c1 >> c2;
    for(int i = (c1 * 1000);i<=9999; ++i) {
        int k = i;
        if (k / 10 % 10 <= c2) {
            int a, b;
            a = k / 100 % 10;
            b = k % 10;
            if(a%2==0 && b%2==0 && a==b) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
