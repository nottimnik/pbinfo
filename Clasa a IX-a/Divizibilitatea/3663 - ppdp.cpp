#include<iostream>
using namespace std;
int main() {
    int n, mic;
    cin >> n;
    for (int d = 2;d*d<=n;++d) {
        if (n % d ==0) {
            mic = d;
            break;
        }
    }
    cout << mic*mic;
    return 0;
}
