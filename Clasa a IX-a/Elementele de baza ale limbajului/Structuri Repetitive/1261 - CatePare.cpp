#include<iostream>
using namespace std;
int main() {
    int k = 1, cnt = 0;
    while(k!=0) {
        cin >> k;
        if (k%2==0) {
            cnt += 1;
        }
        if (k==0) {
            cnt -= 1;
        }
    }
    if (cnt == 0) {
        cout << "NU EXISTA";
    }
    else {
        cout << cnt;
    }
    return 0;
}
