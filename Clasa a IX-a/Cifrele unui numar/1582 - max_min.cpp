#include<iostream>

using namespace std;

int suma(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int max = 0, numar_max = 0, min = 9999999, numar_min = 0;
    for(int i = 0;i<n;++i) {
        int k; cin >> k;
        if(suma(k)>max) {
            max = suma(k);
            numar_max = k;
        }
        if(suma(k)<min) {
            min = suma(k);
            numar_min = k;
        }
    }
    cout << numar_min << endl << numar_max;
    return 0;
}
