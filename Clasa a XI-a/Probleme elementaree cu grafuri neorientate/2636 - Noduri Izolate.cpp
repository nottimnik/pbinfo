#include<iostream>
using namespace std;

int main() {
	long long int n, m, k;
    cin >> n >> m;
    if(2*m >= n) cout << 0;
    else cout << n - 2 * m;
    cout << ' ';
    
    while(k  * (k - 1) / 2 < m) k++;
    cout << n - k;
    return 0;
    
}
