#include <iostream>

using namespace std;

int n, m, muchii = 0;

int main() {
    int a, b, k;
    cin >> n >> m >> k;
    for(int i = 0;i<m;i++) {
        cin >> a >> b; 
        if(a % k != 0 && b % k !=0) muchii++;
    }
    cout << muchii;
    return 0;
}
