#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    int c;
    int sum = 0;
    for(int i = 3;i<=n;++i) {
        cin >> c;
        if (a<b && c < b)
        {
            sum += b;
        }
        a = b;
        b = c;
    }
    cout << sum;
    return 0;
}
