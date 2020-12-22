#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        double a = sqrt(v[i]);
        int b = sqrt(v[i]);
        if (int(a)==double(a)) {
            ++n;
            for(int j = n;i<j;--j) {
                v[j] = v[j-1]; 
            }
            v[i] = b;
            ++i;
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << v[i] << " ";
    }
    return 0;
}
