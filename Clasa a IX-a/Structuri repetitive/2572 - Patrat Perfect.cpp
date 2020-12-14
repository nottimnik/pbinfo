#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> k;
        if (int(sqrt(k))==double(sqrt(k))) {
            cout << "DA" << endl;
        }
        else {
            cout << "NU" << endl;
        }
    }
    return 0;
}
