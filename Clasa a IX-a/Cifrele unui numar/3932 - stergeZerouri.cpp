#include<iostream>
using namespace std;

int main() {
    int n, nr;
    cin >> n;

    nr = n;

    while(n) {
        if(n%10==0) {
            nr = n/10;
        }
        else {
            break;
        }

        n /= 10;
    }

    cout << nr;
    
    return 0;
}
