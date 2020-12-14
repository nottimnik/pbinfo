#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << "{";
    for(int i = 1;i<=a;++i) {
        for(int j = 1;j< b;++j) {
            cout << "(" << i << "," << j <<"),";
        }
        if (i==a) {
            cout << "(" << i << "," << b << ")";
        }
        else {
            cout << "(" << i << "," << b << "),";
        }
    }
    cout << "}";
    return 0;
}
