#include<iostream>
using namespace std;
int main() {
    int n, k, cnp = 0, max = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> k;
        max = 0;
        while(k) {
            if (k%10>max) {
                max = k % 10;
            }
            k /= 10;
        }
        if ((max%2)!=0) {
            cnp += 1;
        }
    }
    cout << cnp;
    return 0;
}
