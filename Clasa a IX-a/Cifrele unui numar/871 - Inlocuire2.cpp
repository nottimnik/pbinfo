#include<iostream>
using namespace std;

int cifre[1001], nr = -1;

int main() {
    int n, c1, c2; 
    cin >> n >> c1 >> c2;
    int numar = 0;

    if(n == 0){
        numar = c2;
        cout << numar;
        return 0;
    }

    while(n) {
        if(n%10==c1) {
            cifre[++nr] = c2;
        }
        else {
            cifre[++nr] = n%10;
        }
        n /= 10;
    }

    for(int i = nr;0<=i;--i) {
        numar = numar * 10 + cifre[i];
    }
    cout << numar;

    return 0;
}
