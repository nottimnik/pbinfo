#include<iostream>

using namespace std;

bool palindrom(int n) {
    int ogl = 0, cn = n;
    while(n) {
        ogl = ogl * 10 + n % 10;
        n /= 10;
    }
    if(ogl == cn) {
        return true;
    }
    return false;
}

int main() {
    int max = -1, apariti = 0;
    int n; cin >> n;
    while(n!=0) {
        if(palindrom(n)) {
            if(n > max) {
                max = n;
                apariti = 1;
            }
            else if(n == max) {
                ++apariti;
            }
        }
        cin >> n;
    }
    if(max == -1) {
        cout << "NU EXISTA";
        return 0;
    }
    cout << max << " " << apariti;
    return 0;
}
